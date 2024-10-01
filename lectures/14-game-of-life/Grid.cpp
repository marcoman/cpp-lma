#include "Grid.h"

/// @brief This is our default constructor
Grid::Grid()
{
}

Grid::~Grid()
{
}

void Grid::create(int row, int column)
{
    // I'll start by being explicit about using this->, but you can omit it if you want
    this->cells[row][column].create();
}

/// @brief This method determines if the current cell will survive.
/// @param row
/// @param column
/// @return
bool Grid::willSurvive(int row, int col)
{
    // If there is no cell, return false
    if (this->cells[row][col].isAlive() == false) {
        return false;
    }
    else {
        // I took the liberty of formatting the code to match the shape of the cell's neighbors.  :D
        int neighbor_count = 
        this->cells[row-1][col-1].isAlive() + this->cells[row-1][col].isAlive() + this->cells[row-1][col+1].isAlive() +
        this->cells[row][col-1].isAlive()                                       + this->cells[row][col+1].isAlive() +
        this->cells[row+1][col-1].isAlive() + this->cells[row+1][col].isAlive() + this->cells[row+1][col+1].isAlive();
        if (neighbor_count < min_neighbors || neighbor_count > max_neighbors) {
            return false;
        }
        else {
            return true;
        }
    }
}

/// @brief  This function determines if we get a new cell
/// @param row 
/// @param column 
/// @return 
bool Grid::willBeBorn(int row, int col)
{
    // If the cell is already alive, do nothing
    if (this->cells[row][col].isAlive() ) {
        return false;
    }
    else {
        // I took the liberty of formatting the code to match the shape of the cell's neighbors.  :D
        int parent_count = 
        this->cells[row-1][col-1].isAlive() + this->cells[row-1][col].isAlive() + this->cells[row-1][col+1].isAlive() +
        this->cells[row][col-1].isAlive()                                       + this->cells[row][col+1].isAlive() +
        this->cells[row+1][col-1].isAlive() + this->cells[row+1][col].isAlive() + this->cells[row+1][col+1].isAlive();
        if (parent_count < min_parents || parent_count > max_parents) {
            return false;
        }
        else {
            return true;
        }
    }
}

void Grid::draw(void)
{
    std::cout << ansi_clear;
    for (int r = 0; r < rowmax; r++) {
        for (int c = 0; c < colmax; c++) {
            this->cells[r][c].draw(r,c);
        }
    }
}

/// @brief This function iterates through the grid and sets the next state.
/// @param next - The next generation.
void Grid::update(const Grid &next)
{
    for (int r = 0; r < rowmax; r++) {
        for (int c = 0; c < colmax; c++) {
            this->cells[r][c] = next.cells[r][c];
        }
    }
}

/// @brief This function populates our cells with random status of alive or dead.  We will make the density a parameter, so we can adjust from light to heavy distribution.
/// @param  none
void Grid::randomize(void)
{
    const int rand_limit = RAND_MAX / density;
    time_t now;
    time(&now);
    // Uncomment the next line if we want a random board.
    //srand(now);

    // We are only populating the cells with information, and not displaying anything to the screen.
    for (int r = 0; r < rowmax; r++) {
        for (int c = 0; c < colmax; c++) {
            if (rand() / rand_limit == 0) {
                std::cout << r << ',' << c << std::endl;
                create(r,c);
            }
        }
    }
}

// @brief - New cells start unpopulated, and we have to calculate the state of the next generation.
// We determine which live cells survive, and which unpopulated cells become populated.
void calculate(Grid &oldGen, Grid &nextGen)
{
    for (int r = 0; r < rowmax; r++) {
        for (int c = 0; c < colmax; c++) {
            if (oldGen.willSurvive(r, c)) {
                nextGen.create(r, c);
            }
            else if (oldGen.willBeBorn(r, c)) {
                nextGen.create(r, c);
            }
        }
    }
}

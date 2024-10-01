#ifndef GRID_H
#define GRID_H

#include "Cell.h"

/// @brief This is our grid class to contain a single cell plus its metadata.
class Grid {
private:
    // We need to specify our grid with 2 extra rows and columns to permit the border.
    Cell cells[rowmax + 2][colmax + 2];

    // The density is a number from 1 to 100 that defines how dense our initial board should be
    const int density{5};

public:
    /// @brief Constructor for the Grid class.
    Grid();
    /// @brief Destructor for the Grid class.
    ~Grid();

    /// @brief This function creates a cell at the named row and column
    /// @return void
    void create(int row, int col);

    /// @brief This function draws the grid to the screen.
    /// @return void
    void draw(void);

    /// @brief This function updates the grid based on the rules of the Game of Life.
    /// @return void
    void update(const Grid& next);

    /// @brief  This initializes our Grid.
    /// @param  
    void randomize(void);

    /// @brief Will the cell at (row, column) surive to the next generation?
    /// @param row The row of the cell to check
    /// @param col The column of the cell to check
    /// @return bool True if the cell will survive, false otherwise
    bool willSurvive(int row, int col);

    /// @brief Will the cell at (row, column) be born in the next generation?
    /// @param row The row of the cell to check
    /// @param col The column of the cell to check
    /// @return bool True if the cell will be born, false otherwise
    bool willBeBorn(int row, int col);

};

/// @brief This function calculates the next generation of the Game of Life.
/// @param oldGen
/// @param nextGen
void calculate(Grid &oldGen, Grid &nextGen);


#endif // GRID_H 
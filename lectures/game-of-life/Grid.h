#ifndef GRID_H
#define GRID_H

/// @brief This is our grid class to contain a single cell plus its metadata.
class Grid {
private:

public:
    /// @brief Constructor for the Grid class.
    Grid();
    void initialize(void);
    void draw(void);
    void update(Grid);
};


#endif // GRID_H 
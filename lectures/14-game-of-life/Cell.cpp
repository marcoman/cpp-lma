#include "Cell.h"
#include "life.h"

#include <iostream>

void Cell::draw(int row, int col) const {
    std::cout << ansi_escape << row + 1 << ";" << col + 1 << "H";
    std::cout << (alive ? live_cell : dead_cell);
}

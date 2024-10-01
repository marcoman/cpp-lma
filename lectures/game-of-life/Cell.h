#ifndef CELL_H
#define CELL_H

#include <iostream>
#include "life.h"

const std::string ansi_escape{"\x1b["};
const std::string ansi_clear{ansi_escape + "2J"};
const std::string ansi_home{ansi_escape + "H"};

class Cell {
private:
    bool alive;
public:
    Cell(): alive(false) {}
    void draw(int row, int col) const;
    void create(void) {alive = true; }
    void erase(void) {alive = false;}
    bool isAlive() const {return alive; }
};

#endif // CELL_H

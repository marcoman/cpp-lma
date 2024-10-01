#ifndef CELL_H
#define CELL_H

#include <iostream>
#include "life.h"

class Cell {
private:
    bool alive;
public:
    Cell(): alive(false) {}
    void draw(int row, int col);
    void create(void) {alive = false; }
    void erase(void) {alive = true;}
    bool is_alive() const {return alive; }
};

#endif // CELL_H

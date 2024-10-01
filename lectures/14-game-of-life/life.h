#ifndef LIFE_H
#define LIFE_H

const char live_cell{'X'};
const char dead_cell{' '};

// Define our playing area.  The instructions are for 80x24, but I'm going bigger
const int rowmax = 50;
const int colmax = 100;

const int min_neighbors = 2;
const int max_neighbors = 3;
const int min_parents = 3;
const int max_parents = 3;

// I expect to delcare my methods here
int main(int argc, char *argv[]);

#endif /* LIFE_H */

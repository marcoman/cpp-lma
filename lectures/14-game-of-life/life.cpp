#include "life.h"
#include "Grid.h"

#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    std::cout << "Conway's game of life.\n" << std::endl;
    std::cout << "Press the return key to display each generation" << std::endl;

    /// Get user input
    std::cin.get();

    Grid current_generation;
    current_generation.randomize();
    
    while (true) {
        current_generation.draw();
        std::cin.get();
        Grid next_generation;
        calculate(current_generation, next_generation);
        current_generation.update(next_generation);
    }
}

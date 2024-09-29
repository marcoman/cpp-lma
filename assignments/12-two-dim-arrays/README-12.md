# Introduction


## Two-Dimensional Arrays 
- Write a program which
- Initializes a two-dimensional array

See the example I have in the [test](test.cpp) application, which follows what we did in the lecture.

- Prints out the value of an element from the array
Yup.  I also took the liberty of adding a few `#define` statements to make the #rows and #columns constants.

- Iterates over all the elements and prints out their elements in order
I print the contents to the screen.

## Flattened two-dimensional array
- Repeat the previous exercise, but with the data "flattened" into a one-dimensional array
- Why is this useful?

The flattened array is useful for CPU-based memory access, where we benefit from operating on a contiguous and sequential set of memory.

However, I know that if I do GPU-based memory access, I will want to ensure I utilize memory in 2D so I can allocated threads in parallel.  A true 2D matrix makes sense.

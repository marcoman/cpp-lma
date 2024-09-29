# Pointers

- Write a simple program that creates a pointer
- Use a stack variable to set the pointer's value
- Print out the value of the pointer
- Print out the value of the stack variable by dereferencing the pointer


# Pointers and Heap Memory
- Explain how to obtain allocated memory from the heap

We allocate memory from the heap by using the new keyword to get our space.

- Why are pointers needed for this kind of memory?

This type of memory can only be access by pointers.  We get this memory from the OS.

- What important thing must you do with this memory when you have finished using it? Why is it important?
We have to free the memory with the `delete` operator.


# Array Allocation

- Explain how to obtain allocated memory from the heap which can be used for an array

We allocate memory for an array by using the new operator with the size of the memory.  For example:

```cpp
    // we could also initialize the value of intMyInt as:
    int *ptrMyInt2 = new int{55};

```

- Write a simple program which allocates memory from the heap for an array. Populate the array and print out the values of its elements

```cpp
// See my code for he real example
    #define ARRAY_SIZE 5
    int *paMyInts = new int[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        paMyInts[i] = rand() % 100;
    }

```


-  What important thing must you do with this memory when you have finished using it? Why is it important?
We have to free the memory and return it to the operating system, otherwise we get a memory leak.

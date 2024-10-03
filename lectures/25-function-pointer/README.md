# Introduction - Function Pointer

A function's executable code is stored in memory, and we can get an address to the start of this code.  This is the function pointer.

_NOTE: I remember using function pointers are part of table-driven logic.  We would map a value to function and pass the variables by reference to the function. _

```cpp
void func(int, int);
auto func_ptr = &func;

// void (*func_ptr)(int, int) = & func
```

The `func_ptr` is a pointer to the function.  Notice how we have to use parenthesis around `*func_ptr` to get the function in the above statement.  This is because if we only had `void *func_ptr...`, then it would read as a function that returns a pointer to `void`.

We can also use a type alias

```cpp
using pfunc = void(*)(int, int);
```

## Callable object

A function pointer is a callable object.  It behaves like a variable, but can be called like a function.  This means we can copy it and pass it around.

To call the function, we have to dereference the pointer:

```cpp
(*func_ptr)(1,2);
```

A function pointer is a _first class object_ meaning we can pass the function pointer as an argument to another function, and we can return a function pointer from a call to another function.

_NOTE: returning the function pointer from a call to another is what I used before in my table-driven function calls._

## Passing a function pointer

We can pass a function pointer as an argument to another function with this format:

```cpp
void some_func(int, int, pfunc);
```

The function calls the pointed-to function in its body
```cpp
void some_func(int x, int y, pfunc func_ptr){
    (*func_ptr)(x,y);
}
```

Similarly, we can return a function pointer from a function.  See the tail end of [test.cpp](test.cpp).


## Pros and cons of function pointers

Function pointers were inherited from C.  _This is why I remember them._
This is useful for writing callback.  _When I did automotive, we "took a chance" to use this function.  The reason for seeing it as a chance is that that automotive software engineering at the time was risk averse.  This mean that pointers, memory allocation, and callbacks had to be done with care._

Function pointers are raw pointers,and can be overwritten, null, or uninitialized.  This means we carry risk with using the function pointer.

Also, the syntax is ugly!

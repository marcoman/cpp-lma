# String Operations

The C++ String class has a native interface and a STL interface.  Well over 100 member functions!

## Basic operations

- Assignment
```cpp
s1 = s2;
```

- Appending
```cpp
s1 += s2;
```

- Concatenation
```cpp
s1 + s2;
```

- Comparison
```cpp
s1 cmp s2;
```

For example ==, !=, <, >, <=, >=
s2 can be a C-styled string of char

## Compatibility with C-Style strings

`std::string` has a member function `c_str()` - returns data as a C-style string

```cpp
const char *pChar = str.c_str();
```

## `substr()`

Returns a substring, starts at the index of the index

```cpp
string str{"Hello world!"};  
s1 = str.substr(6); // returns "world!"

// This returns "wo"
s2 = str.substr(6,2);


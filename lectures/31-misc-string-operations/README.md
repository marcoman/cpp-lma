# Miscellaneous String Operations

`std::string` and `std.vector` have a `data()` member function.

This returns a pointer to the internal memory buffer.  For `std::string`, this is null-terminated (equivalent to `c_str()`)

Useful for when we work with APIs written in C


## Swappoing

`std::string` has a swap member function


```cpp
string s1{"Hello"};
string s2{"Goodbye"};

s1.swap(s2);
```

There is also a non-member function:

```cpp
swap(s1, s2);
```

Internally, the `swap` function works on the pointers, not the actual data.


## Specialized `swap()` for `std:string`

The std::string class has a "header"
- Integer with the character chount
- pointer to the data

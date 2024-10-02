# Introduction

We'll examine different types of loops

# `const` iterator

NOTE: This one is of interest to me because I saw it recently with a CUDA example.

We use `const_iterator` to prevent the loop from modifing the string (value):

```cpp
string::const_iterator cit;

for (cit = str.begin(); cit != str.end(); c++)
    cout << *cit << ", ";
cout << endl;
```

We'll use a const_interator if are passed a reference to a container.  Usually this is a const reference.


# Reverse iterators.

Same as regular iterators, except in reverse.

We use `rbegin()` and `rend()` methods to do their part.  This next example prints a string starting from the end.

```cpp
    string::reverse_iterator rit;
    for (rit = str.rbegin(); rit != str.rend(); rit++)
        cout << *rit << ", ";
    cout << endl;

```

see [test.cpp](test.cpp) for a working example.

# const forms of `begin()` and `end()`

Modern C++ has const forms of `begin()` and `end()` to make it easier to use auto to iterate over containers.

`cbegin()` and `cend()` return const iterators

```cpp
    string::const_iterator cit;
    for (auto it = str.cbegin(); it != str.cend(); ++it)
        cout << *it << ", ";
    cout << endl;
```

# reverse const forms as `crbegin()` and `crend()`

Works as expected!


# Non-member begin() and end()

C++11 provides begin() and end() global functions.

They are more readable than member functions.

```cpp
for (auto it = begin(str); it != end(str); ++it
    cout << *it << ", ";
cout << endl;
```

These also work with built-in arrays:

```cpp
int arr[] = {1,2,3,4,5,6};
for (auto it = begin(arr); it != end(arr); ++it)
    cout << *it << ", ";
cout << endl;
```

# const iterators

C++14 added the other forms, such as `cbegin()` `rbegin()` and `crbegin()` (and end)


# Range for loops

Special concise syntax for iterating over containers.  In the examle below, el is a **copy** 

```cpp
for (auto el: vec)
    cout << el << ", ";

cout << endl;
```

# How do we modify elements?  We use a reference

```cpp
for (auto& el: vec)
    el += 2;
    cout << el << ", ";

cout << endl;

```

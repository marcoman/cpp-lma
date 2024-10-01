# Introduction

In this module we cover string literals.

# Notes

The best way to use String Literals is to include the string in double quotes

```cpp
const char *cca = "Hello, World!"; // this is C-Style string, null terminated.
```

We have a limited range of operators with this structure.

Starting with C++14, we can now add a suffix:

```cpp
using namespace std::literals;
string mystr = "Hello, string!"s;  // this creates a std::string
```

Note: _I didn't know e could use the suffix with strings.  Maybe I didn't see them in the code before?_

We can use the suffix anywhere that expects a std::string object.


# Raw Strings

We can utilize `R"()"` to render raw strings.

```cpp
string url = R"(<a href="file">path/to/the/file</a>\n)";
```

But the above still has a double quote inside!  So we use the `R"x...x"` notation:

```cpp
string url = R"x(<a href="file">path/to/the/file</a>\n)x";
```

# Converting between strings and numbers

- In C, we had functions atoi(), atod(), etc. for converting C-style strings to numbers.
- Many compilers provided non-standard itoa() etc. for the opposite.
- C++ inherited.
- C++11 provides to_string()

## Converting Strings to Integers


- `stoi()` takes an std::string argument and returns it as an it


- Leading whitespace is ignored

## Base conversion

There are other `st` functions such as `stoll` for long-long.

## Converting strings to Floating-Point

`stod()` returns double.
No option to use other bases.


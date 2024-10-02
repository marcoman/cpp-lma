# Introduction

Back in the C days, we could specify a variable should be created on the stack by using the 'auto' keyword.

In modern C++, it now means the compiler should deduce the type based on the initial value.

# Simplifying code.


See [test.cpp](test.cpp) for examples where I tested. This includes simplification of types.

# `auto` with qualifier

```cpp
const int& x{6};
auto y = x;
++y;  // Is this alllowed?
```


# `auto` with function return value

```cpp

int func() {
    return 5;
}

auto x = func();

```

# Should I `auto` or not?

- We use auto when types do not matter.
- When the type does not provide useful information.
- when the code is clearer without the type.
    - The iterator is a good example.
- When the type is difficult ot discover
    - Template metaprogramming
- When the type is unknowable
    - compiler-generated types


Do not use auto:
- you want a specific type.
- auto makes things less clear.

```cpp
auto h = xyz(); // We don't know what h is meant to be.
```


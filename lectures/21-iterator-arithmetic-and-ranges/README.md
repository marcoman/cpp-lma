# Introduction

## Iterator Arithmetic

**NOTE: addition and subtraction are supported, but not division.**

We can perform arithmetic on iterators, similar to pointers.  

_There is language about "Adding to an iterator moves it towards the back of the container."_

I've noticed the presenter use the word _container_ to describe the data structure.  I've made the mental note to investigate where the word is coming from.

One way to calculate the length is:

```cpp
end() - begin();
```

## Iterator Arithmetic: `next()` and `prev()`

- `next()` takes an iterator and returns the follwing iterator

```cpp
auto second = next(begin(str));
```

- `prev()` takes and iterator and returns the previous iterator

```cpp
auto last = prev(end(str));
```

## Iterator Arithmetic: `distance()` and `advance()` functions

`distance()` returns the number of steps need to go from the first argument to the second


```cpp
distance(begin(str), end(str));  // This returns the number of elements
```

`advance()` moves an iterator by the second argument

```cpp
auto mid = begin(str);
advance(mid, distance(begin(str), end(str)/2));

```

## Half-open range

**Half-open** ranges are typical for lops where we do the following, and the range we use is `0, 1, ... 9`:

```cpp
for (int i = 0;
     i < 10;
     i++ )
```

In mathematics, we write this half-open range as, `[0,10)`.  Notice the opening square bracket, and the closing parenthesis.

With iterators, we have the same

```cpp
for (auto it = begin(str); it != end(str); it++)
```

The net effect is that it == end() is not allowed.

# Character functions


The C++ standard library has a number of character functions inherited from C

These are defined in `<cctype>` and operate on chars


isdigit(c)
islower(c)
isupper(c)
isspace(c);
ispunt(c);


## `tolower()` and `toupper()`

They return the lower and upper case equivalents.

## Case sensitivey and String Comparisons

There is not direct support for doing case-insensitive comparisons of two strings.

The simplest soution is to convert all strings to a single case

```cpp
for (auto& c: str)
    c = toupper(c);
    // Alternatively
    // c = tolower(c);

```

However, this has the effect of altering the strings, which may not be desirable.

Let's consider how we would write our own.

`equal_strings` function - let's emulate built-in operators

Take two strings by const reference and return a bool

```cpp
bool equal_strings(const string& lhs,
    const string& rhs)
    {}

```

But what if the strings are not equal in length?  Use the built-in (and fast) `size()` function

```cpp
    if (lhs.size() != rhs.size())
        return false;
```

```cpp
auto lit = cbegin(lhs);
auto rit = cbegin(rhs);

while (lit != cend(lhs) && rit != cend(rhs)) {
    ...
    if (toupper(*lit) != toupper(*rit))
        return false;

    lit++;
    rit++;

    ...
    return true;
}
```

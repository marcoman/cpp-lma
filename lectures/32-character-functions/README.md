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



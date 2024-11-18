# Removing Elements from Strings

The `erase()` member function, and takes two arguments.


```cpp
string hello{"Hello"};

see the code example!
```


## `erase()` and iterators

When used with an iterator, it erases the element.

With a range, it ereases al the elements in that range.

_see the code_

## `replace()` 

Replaces removes some characters and replaces them with others..


```cpp

string str{"Say Hello"};
auto gdx = str.find("H");
str.replace(gdx, 5, "Goodbye") // This replaces 5 characers starting from H with the letters "Goodbye"

```

## `replace()` and iterators
Similar story to the erase() with iterators.

## `assign()`


`assign()` removes all the characters from a string and replaces them with other characters.


```cpp
string str3{"Hello"};
str3.assign("Goodbye");
```
# Introduction

We are used to seeing code like this:

```cpp
const char str[] = {'H', 'e', 'l', 'l', 'o'}

const char *pEnd = str + 5;
const char *p = str

while (p != pEnd) {
    cout << *p << ", ";
    ++p;
}
```

## Loop termination

The result is the pointer 'p` doesn't point to anything useful at the conclusion of the loop.

## std::string interation

We  _could_ do the same with std::string, but there is a better way.  This one works for array-based string.

## Iterator

This is the better way:

```cpp
string str{"Hello"};
string::interator it = /* interator to the first element*/ ;
while (it != /* iterator to the last element plus one */) {
    cout << *it << ", ";
    ++it;
}
```

# How does the iterator work?

```cpp
std::string::iterator
```

We have the `begin()` and `end()` member functions.  Note taht the end() iterator corresponds to the element after the last element.  Our loop looks like this:

```cpp
string str{"Hello"};
string::interator it = str.begin();
while (it != str.end() ) {
    cout << *it << ", ";
    ++it;
}
```


# Using iterators with `vector`

I also added an examle that uses vector<int> in [test.cpp](test.cpp)
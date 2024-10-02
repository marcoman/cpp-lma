# Introduction

We often need to write code that is functionaly the same, but uses different types of data.  This is why we have templates.  This is "generic programming" and quite useful as we've seen with our vector examples.

Also, I've seen this used quite a bit in my NVIDIA training, because we're operating on different compatible data types such as int or floats (of their respective sizes).

When we specify the type with a template, this is known as _instantiation_ of the template.  This happens automatically when we see something like `vector<_type_>`.

## Writing a template

We use a dummy type to show the complier what the code looks like.  The dummy type is the _template parameter_.

```cpp
template <clast T>
T Max(const T& t1, const T& t2) {
    if (t1 > t2) {
        return t1;
    }
    else {
        return t2;
    }
}

```

## Templates and Code organization.

I see the distinction made about the following:

- with a regular function, the compiler only needs to be able to see the **declaration** when it is called.
- with a tempalte, the compiler must be able to see the **definition** when it is called.

To me this makes sense because we need to know what code we're generating!

This usually means the template definition is included in the **header** so it is included automatically.

Some programmers put all templates into an ".inc" file.


## Class Templates

We can write classes that work with data of any type:

```cpp
template <class T>
class Test {
    T data;
    Test(const RT& data): data(data) {}
};

/// Here is how we create an instance of this class, by putting the type in angle brackets:


// This initializes the variable named *test* as a type of <string> with the value of "Hello"
Test<string> test{"Hello"};

// This is the class that the compiler generates for the above:
class Test_myuniquename {
    string data
    Test(const string& data) : data(data){}
};

```


## Constructor Argument Deduction in C++17

When we create an object of a tempalted class, the C++17 compiler can deduce the parameter type.  NOTE: how the C++17 version _deduces_ the type.

```cpp
vector<int> vec{1,2,3};  // C++11 declared as vector<int>
vector vec{1,2,3}; //C++17 deduced as vector<int>
```

This is known as "CTAD" = **Constructor Template Argument Deduction**
CTAD makes many declarations simpler.

This only works when we initialize the declaration.


## typename

Origianlly, the class keyword had to be used for a template parameter.

```cpp
template <class T>
```

With C++98, we now have `typename`

```cpp
template <typename T>
```

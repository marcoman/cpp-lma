# Introduction

We talk about casting.  Casting has have bad unintended side-effects.  This is because we're converting types, and this includes casting const to non-const.  or, convert to a typed or untyped.  And more (including pointers).

**We should eye casting with suspicion.**

# Traditional

```cpp
int c = 'A';
cout << (char> c << endl;
```


# New, with C++98

We use a new syntax

```cpp
(type) expr
xyz_cast<Type>(expr)
```
We are reminded of the comment from Stroustrup:

"An **ugly** operation should have an **ugly** syntactic form"

Note: casting disables compiler checks, which may lead to buggier code.


static_cast is used to convert an expression to a different type

```cpp
cout << static_cast<char>(c) << endl
```


# const_cast

We use `const_cast` to convert a const expression to the non-const equivalent.

For example, the following defintion should use `const char *`

```cpp
void print(char * str)
{
    cout << str << endl;
}
```

it should be:

```cpp
void pint(const char * str)
```

And this code will have the error indicated:

```cpp
const char *msg = "Hello earthling!";
print(msg); // This one will have an error
print(const_cast<char *>(msg)) // This casts to non-const
```

However, if print() mutates str, we have undefined behavior.


# reinterpret_cast

Use this to convert data in a buffer to untyped binar data.
We use this mostly for low-level work (communication with hardware, OS, binary files)

I expect to use this feature when doing device development.



# Adding Elements to Strings

The String class has an `append()` member function to add the argument to the back of the string

```cpp
string hello{"hello"};
hello.append(" world"s);
```

Note:  The append has an overload which makes it easier to add a substring:

```cpp
hello.append("BLA!!!!"s, 3,2); // This adds from character 3, a total of 2 characters.
```

## `insert()` 

Insert as a few overloads.  It adds characters before the specified position.

See the code

## `insert()` continued


We can insert a substring
```cpp
string str {"xx"};
string str2{"trombone"};
str.insert(1,str2,4,2);
```

We can insert a char multiple times
```cpp
string str3("cash");
str3.insert(1,3,'r');
```

## Iterators

We can also use iterators with inserts.

```cpp
string str{"word"};
auto last = end(str) - 1;
str.insert(last,'l');
string str2{"ski"};
auto last2 = end(str2);
str2.insert(last2, 2, 'l');

```

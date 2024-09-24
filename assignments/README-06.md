# Questions - Universal Initialization
• What is meant by universal initialization in C++?
• Write a program which demonstrates universal initialization of built-in 
types and objects with single and multiple initial values

Universal declaration is new and improved syntax for declaring and initializing variables in C++.  This is generally considered a good thing.

Previously, we would do things like this:

```c++
int a = 1;
int myarray[5]
myarray[0] = 1 /* etc. */
```

now we can do the following:

```c++
int a{1};
int myarray{5} /* The only answer here is the size is 5 */
```


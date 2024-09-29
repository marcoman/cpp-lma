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

# Advantages of Universal Initialization
• What are the advantages of universal initialization?

The intialize is clearer and consistent because we always use the curly braces.
Also, in our lecture we are reminded of how the intialization of an array may be confusing.  Is the following an array of size 3 x 4 or something else:

```c++
int myarray{3,4}
```


# Type Alias
• What is meant by a "type alias"? Why is it useful?
• Rewrite the following type alias using the Modern C++ alternative
typedef vector<int> IntVec;
vector<IntVec> vec_of_vec;
• Compile your answer to check it is correct

The type alias is a conveninece to help us avoid having to use multiple nested `<>` notation when defining a template, or other values.

Also, it is convenient because it follows a more natural assignment style.  For example, this reads nicer:

```c++
using IntVec = vector<int>
IntVec vec_of_vec;
```

thank this code:

```c++
typedef vector<int> IntVec;
vector<IntVec> vec_of_vec;
```

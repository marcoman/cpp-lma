# Array, String and Vector 

# Using std::vector
- Write a program which creates an empty vector of int and populates it with the values 4, 2, 3, 4, 1 in order

```cpp
// See my final code
// I'll use the std::string class
string hello{"Hello"};

// also

vector<char> vHello{'h','e','l','l','o'}
```

- Display the first and the fourth elements of the vector

```cpp
// I'll use 
hello[0]
hello[3]

// and
vHello

```
- Change the value of the third element to 6

- Print out all the elements of the vector in order

# Using std::string
- Write a program which creates a string containing the characters "Hello"
- Display the first and fifth characters of the string
- Change the value of the fourth character to 'b'
- Print out all the characters of the string in order


# The assignment

A simple C++ class represents a URL, such as "http://www.example.com/index.html".

The class has two members of type std::string. One member stores the protocol of the URL (the "http" part) and the other stores its resource (the "www.example.com/index.html" part which comes after the separator).

Questions for this assignment
Define the class.

Write a constructor for the class which takes the protocol and resource as arguments.

Add a member function to the class which displays the complete URL: the protocol, followed by the separator, followed by the resource. For example, "http://www.example.com/index.html"

Write a program to test your class. This program will create an object of the class, then call its member function to display the complete URL.

## What I think

I'll define a class as something like "URL"
I'll define a constructor that includes the two parameters for protocol and resource, and I'll see if i can make the protocal default to https if it is not provided.

My print function will add the double-slash to the unified url.


# Questions - part 1

Local variables
• Explain what is meant by "local variable" in C++
• In the following code, what is the initial value of d?
double d;


A local variable is scoped to a closure, i.e. `{}` and only exists during the closure.  In other words, the local variable is no longer available when you exit.

The code:
```
double d;
```

We create a variable on the stack named `d` and it is of type `double` and it's intial value is not known.  It could be anything!

# Questions - Part 2

Argument Passing
• Explain what is meant by the following terms:
• Pass by value
• Pass by address

Pass by value is when we make a copy of a variale or object into a caling function.  For example, this code creats an object named `me` and of type `myClass` and its constructor is passed the text "my name" - presumably the name of the object.

```c++
myClass me{"my name"}
```

This call creates a copy of the object when we pass it to the function named `myfunc`

```c++
myfunc (me)
```

When we pass by address, we pass along a reference to the variable and we don't create a copy.

```c++
myfunc2 (&me)
```

`myfunc2` uses the object directly.


When we pass by reference (not asked), we 

# Questions - Function Arguments
• Write programs which demonstrate
• Pass by value
• Pass by address
• Pass by reference
• Add code to your programs to show the addresses of the variables 
involved
• Explain your observations

See the code at these locations to see my example code:

- [pass by value](../lectures/01-pass-by-value.cpp)
- [pass by address](../lectures/01-pass-by-address.cpp)
- [pass by reference](../lectures/01-pass-by-reference.cpp)

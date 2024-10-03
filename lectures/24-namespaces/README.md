# Introduction - Namespaces

Another tool to group together logically related symbols.

NOTE: I'll have to admit I didn't really use namespaces for my own purposes, and largely used the existing namespaces.  In some ways, I can say I didn't really understand how to leverage namespaces in the past.  Let's see if that changes today.

A namespace groups together the names of all the functions, types, and variables defined by it.

The recommendation seems to be to use a namespace when we define a library.

Let's consider the standard C++ namespace, `STD`.


## Why are namespaces useful?

If we write a large program, we often use several libraries and some may use the same name, which leads to name conflicts.  For example, two libraries could have the same class named `Test`.

We create a namespace by using the `namespace` keyword, followed by the name we wish to use.  We put all the symbols in our namespace inside.

```cpp
namespace marco {
    class Test;  // This defines marco::Test
}

```

If we want to use this symbol outside of the namespace, we need to include our namespace.

```cpp
marco::Test myTest;
```

When names are not in a namespace, it is part of the "global namespace."  The global namespace has no name.  We can then have this:


```cpp
class Test{...};
::Test mySecondTest;
```

We can split namespaces over different parts of the code, and over different files.

```cpp

// In the file marco/Test.h
namespace marco {
    class Test {...}; // This is the declaration of the class marco::Test
}


// in the f;ile marco/Test.cpp
namespace marco {
    // Note: I just learned (realized?) that the const value after the function declaration means the method does not change any of the member data.
    int Test::do_test(int value) const {...} // This is the member function of the class marco::Test
}
```

 ## Name Hiding

 When a symbol is defined in a namespace, it hides symbols outside of the namespace with the same name.


 ```cpp
 int x = 23;  // This is defined in the global namespace

 namespace marco {
    int x = 47;
    void func() {
        cout << "x = " << x << endl;
        cout << "::x = " << ::x << endl;
    }
 }
```
I think the output will show 47 and then 23.  One way to find out is to try it in my [test.cpp](test.cpp)

YUP!

The above example shows that we can define namespaces within namespaces.  I believe this also means that all namespaces belong within the global namespace.


## Using Declarations

A `using` declaration brings the the namespace symbols into the global namespace.

```cpp
using marco::Test;  // This brings "Test" into the namespace, making it available as:

Test();
marco::Test();
::Test()

```

The `using` declaration works starting at the point the declaration is used.

_NOTE: I wonder what happens if we clobber an existing name when we use `using`_

I learned that the `using` directive brings everything from a namespace into the global namespace.  **This is not a good practice as it contradicts the point of having namespaces.**

So why have we be using `using namespace std;` in our code?

Answer: Somebody went through all the effort to create a namespace, and we went ahead and clobbered their work.  However, in our education setup, we simplify our `std` usage.

_The guidance is not to use `using namespace std;` at work.  😊

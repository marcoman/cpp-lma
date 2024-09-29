# Special Member Functions
• Briefly describe the purpose of the special member functions:
• Constructor
• Copy constructor

The constructor is a default method we _always_ call when we create an object of a class.  We can specify the constructor to initialize variables and other information in our class.

The copy constuctor is a constructor that initializes an object with the values we copy from an existing object of the same class.  The copy constructor is what we use when we pass by value.

# Special Member Functions
• Assignment operator
• Destructor


The Assignment operation is espeically useful when we chain methods of a class when we create.  We return a reference to the newly created object so we can invoke a member function or access a member variable.

The destructore is a built-in method we can specify to free memory, clean up variables, or otherwise tidy up.

# Test class
• Write down simple definitions of the special member functions for 
the following class
class Test {
int i;
string str;
public:
...
};

See the code for this exercise [here](08-exercises/test.cpp)

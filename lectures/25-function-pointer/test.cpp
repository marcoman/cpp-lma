#include <iostream>
#include <vector>

using namespace std;  // I thought this was a no-no.  🤣🤣

void f_add(int x, int y) {
    cout << x << " + " << y << " = " << x + y << endl;
}

void f_sub(int x, int y) {
    cout << x << " - " << y << " = " << x - y << endl;
}

void f_mul(int x, int y) {
    cout << x << " * " << y << " = " << x * y << endl;
}

void f_div(int x, int y) {
    if (y != 0) {
        cout << x << " / " << y << " = " << x / y << endl;
    }
    else {
        cout << "NAN" << endl;
    }
}

using pfunc = void(*)(int, int);

void f_call_func(int x, int y, pfunc func_ptr) {
    (*func_ptr)(x,y);
}

// Create pfuncs for the add, sub, mul, and div functions
pfunc other_add() {
    return f_add;
}

pfunc other_sub() {
    return f_sub;
}

pfunc other_mul() {
    return f_mul;
}

pfunc other_div() {
    return f_div;
}


int main() {
    auto func_ptr {f_add};
    std::vector<void (*)(int,int)> func_vector{f_add, f_sub, f_mul, f_div};

    std::cout << "Direct usage of a function vector" << endl;
    (*func_ptr)(1,2);

    // Run through the different function pointers in my vector.
    std::cout << "Output from each function in my vector" << endl;

    std::vector<void (*)(int,int)>::const_iterator cit;
    for (cit = func_vector.begin(); cit != func_vector.end(); cit++) {
        (*cit)(2,3);
    }

    // Use the function to call the same results.
    std::cout << "Call each function with a helper function (pass a pointer to the function)" << endl;
    f_call_func(3,4,f_add);
    f_call_func(3,4,f_sub);
    f_call_func(3,4,f_mul);
    f_call_func(3,4,f_div);

    // Now, let's return the function
    std::cout << "Return a function from a function" << endl;
    f_call_func(5, 6, other_add());
    f_call_func(5, 6, other_sub());
    f_call_func(5, 6, other_mul());
    f_call_func(5, 6, other_div());

    return 0;
}
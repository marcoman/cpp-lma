# Introduction

If Statements and Swith in C++17.

_Methinks I'll learn something new here._

In traditional C++, we can do loops in two ways.


```cpp
int i;
for (i = 0; i<size; ++i) {
    ...
}

// OR
// intializing the vriable is permitted in C++98
// This is more concise and preferred.
for (int i=0; i<size; ++i){
    ...
}
```

In the first case, the variable `i` continues to exist after the for-loop, but in the second case it does not.

## Initializer in `if` statement

Consider the following:

```cpp
auto iter = begin(vec);
if (iter != end(vec))
    ...
```

C++17 allows for the following initializer:

```cpp
if (auto iter=begin(vec); iter != end(ved))
    ...
```

- `iter` is local to the if statement
- and this includes the `else()` block

## Initializer in `switch` statement

_I miss switch statements when I do my Python work.  😊 _

C++17 allows initilizers in switch statements:

```cpp
// Instead of:
const char c = get_next_char();
switch (c) {
    ...
}

// We can do the following:
switch (const char c = get_next_char(); c) {
    ...
}
```

## Falling through case labels deliberately.

I already know about the deliberate case statement fall-through, and I am aware of the accidental fall-through.

```cpp
// This is okay and intended.
switch (const char c = arr[i]; c) {
    case ' ':
    case '\t':
    case '\n':
        ++ws_count;
        break;
    default:
        break;
}

// This one is not because everybody get the same vehicle type.
switch (employee_location) {
    case HEAD_OFFICE:
        vehicle_type = Mercedes;    
    case SALES_OFFICE:
        vehicle_type = Peugeot;    
    case WAREHOUSE:
        vehicle_type = Truck;    
}
```

C++ provides the `[[fallthrough]]` attribute.

_This is new to me_

As a pro, I would be inclined to be explicit about fall throughs.  

# Searching strings

## `find()` - search forward for a string.

The `find()` member function looks for the first occurence of the argument in a string.

THe argument can be a char, a std::string, or a C-style string.

It returns the index of the first match, otherwise it returns `string::npos`

## `rfind()` - search backwards for a string.

Searches from the end - reverse.
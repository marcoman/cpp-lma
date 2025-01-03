# Introduction
In C++, a file is representeded by a sequence of bytes, indentified by a filename.
We do no need to know how the data is stored (or where)

## Files and Streams
File interactions are represented by fstream objects
- similar to iostream objects for console input/output

fstream objects always access files "sequentially"
- a sequence of bytes
- in order
- of unknown length
- with no structure

fstreams do not understand file formats

## C++ fstream operations
- Open
    - connects to the fstream object
    - the file is available to the program
- Read
    - data is copied from the file into memory
- Write
    - data is copied from member to the file
- Close
    - disconnect

# C++ fstream operations
For each of the fstream operations, the stream object will call a function in the OS API.

## Opening and closing a file
- The file must be opened before we can use it.
- We should close a file.  Avoid "too many open files" error
- When C++ programs terminate, the runtime wil close all open files.

## Reading and writing files
- As data passes between program and the file, it may be temporarily stored in a memory buffer.
- This makes large data transfers more efficient, but less timely.


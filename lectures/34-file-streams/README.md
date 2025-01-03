# File Streams

## Stream Types

- iostream
    - ostream (cout)
    - istream (cin)

- fstream
    - ofstream (file stream for writing)
    - ifstream (file stream for reading)

## How to open a file for reading

- Easiest way is to use the ifstream constructor

```cpp
    ifstream ifile{"text.txt}
```

We should check the stream's state before using it.

```cpp
if (ifile)
    cout << "Success!";
```


## fstream constructor

in C++11, we can now take a std::string for the filename:

```cpp
    string str{"text.txt"};
    fstream file(str);
```

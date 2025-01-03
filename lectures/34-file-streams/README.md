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

## Reading from a file

We can use ifile the same way as cin:

```cpp
    while (ifile >> text)
    cout << text << ",";
```

This reads one word at a time, and remove all white space.

NOTE: We have to match the structure of the file.  Streams don't do this for us.


Often, it is easier to read a complete line of input from the file.  The `getline()` function does this.

THe input is a std:string argument:

```cpp
while (getline(ifile, text))
    cout << text << endl;
```


## How to open a file for writing

- Create a stream object which will open the file

```
    ofstream ofile{"text-out.txt"};
```

This represents the stream to which we can use to write a file.
We should check the state of the stream before using it:

```cpp
if (ofile)
    cout << "successfully opened file for writring\n";
```

We can use ofile the same way as cout:

```cpp
vector <string> words = {"The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};

for (auto word: words)
    ofile << word < ", ";
```
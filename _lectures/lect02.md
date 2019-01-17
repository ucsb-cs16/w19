---
num: "lect02"
desc: " Hello World! + unix, vim and git"
ready: true
pdfurl: https://drive.google.com/drive/folders/1qG48RYFvB7VVEU7yP3eCkG8KRVA9KtYw?usp=sharing
lecture_date: 2019-01-10
---

# Basic Unix Commands

In the displayed commands, don’t include brackets. E.g., `mkdir [name]` will look like `mkdir tmp`, if you want to create a directory called `tmp`.


`pwd`
used to print the working directory - displays the full path


`ls` lists the contents of a directory; if no directory is specified, it will list the contents of the current directory


`ls -l` 
lists the contents of a directory, and provides additional information about the file/directory; 
distinguishes between files and directories (if the line starts with the letter ‘d’, then it corresponds to a directory, if not, then it corresponds to a file)

`mv [src] [dest]` 
move a file/directory called `src` to a file/directory called `src` 

`rm [file]`
deletes/removes a file (use with caution because it deletes files irrecoverably)

`rm -r [dir]`
recursively deletes the contents of a directory ; 
if you use only `rm` for a directory, the operating system will complain and display the error message: `cannot remove [dir]: Is a directory`

`mkdir [name]`
make a new directory called `name`

`mkdir -p [level1/level2/...]`
allows you to create a series of nested directories 

`cd`
used to change directory you are currently located in

`~`
refers to the home directory

`..`
refers to the directory above the current one

`cd ..`
goes to the directory above the current one

`cd ~`
goes to the home directory

`./[name]`
used to execute a compiled program



# Vim Commands

The link below is a very useful guide to learn fundamental commands in Vim (most of these were shown in lecture on January 10th):

https://ucsb-cs16.github.io/topics/vim_basic_eight/


# Topics
* Programming in the unix environment
* The vim (editor) survival skills
* Writing, compiling and running a C++ program (hello world) program
* Breaking down the hello world program
* Code anywhere and everywhere with git 

# Programming in the unix environment
* Unix is an operating system just like Windows and Mac OS
* All your data and programs are stored in files, within the unix filesystem
* File vs. directory
* Files are organized within the *unix filesystem*
* You can navigate the filesystem with some simple commands inside a terminal:
	- ls
	- mv
	- cp
	- pwd
	- mkdir
	- cd
* Relative path vs. absolute path (important for mv, cp, mkdir, cd)


# vim Editor

* We will use vim for the first few weeks this quarter.
* Important to be comfortable with a Unix-based command-line text editor.
* Be sure to understand how to do the [basic eight](https://ucsb-cs16.github.io/topics/vim_basic_eight/) functions.


# Writing, compiling and running a C++ program (hello world) program

```
// hello.cpp
#include <iostream>

using namespace std;

int main() {
	cout << "Hello CS 16!" << endl;
	return 0;
}
```

* Compile and execute the program

```
$ g++ -o hello hello.cpp
$ ./hello
Hello CS 16!
$
```

* `g++` is one of several C++ compilers
	* Compilers translate "source code" (i.e., the contents in the .cpp file) into a lower-level representation that is easier for computer system hardware to understand.
* `-o` is a "flag" that instructs the g++ compiler to produce an executable file called `hello`
* `hello.cpp` is the source file for g++ to use when producing the executable file.
* In order to actually run an executable file in Unix, `./[filename]` is used.




# Breaking down the Hello World Program

```
// hello.cpp
#include <iostream>

using namespace std;

int main() {
	cout << "Hello CS 16!" << endl;
	return 0;
}
```

```
#include <iostream>
```

* This line (also known as an include directive) tells our C++ program to include a library dealing with Input/Output (I/O) functionality.
	* We need the library `<iostream>` to print stuff to our terminal.

```
using namespace std;
```

* This line allows us to use parts of the iostream library without having to prepend `std::`.
	* For more context, `std` is short for "standard".
	* including libraries between angle brackets (< >) imply that this is part of the C++ Standard Library, which is part of the C++ language specification.

```
int main() { ... }
```

* The main function. Every C++ program needs to have one main function as its "starting point".

```
cout << "Hello CS 16!" << endl;
```

* `cout << [some_value]` tells the program to display some_value to the terminal.
* `<< endl;` tells the program to insert a <i>newline</i> at the end.
	* This places the next values to be written on the next line in the terminal.

```
return 0;
```

* Since main must be declared to return a value of "int" type, we are simply returning 0.
	* May get more into the relevance of this later.

# Comments

* Any commented text will be ignored by the compiler.
* Important to comment code for communication with others working with your code!
* `//` denotes a single-line comment.
* `/* */` denotes a multi-line comment.



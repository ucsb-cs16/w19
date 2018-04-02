---
num: "lect07"
desc: "Separate compilation with makefiles"
ready: false
pdfurl: /lectures/CS16_Lecture7.pdf
annotatedpdfurl: /lectures/CS16_Lecture7_ann.pdf
annotatedready: false
lecture_date: 2018-04-23
---


# Topics

## Under the hood of program compilation and execution
* From high-level programs to machine code
	* What are .h, .o and .cpp file?
	* What is an execuatble 
	* Steps in compilation
 	* Creating object files and linking programs with g++
* Separate compilation with Makefiles [read about Makefile](https://foo.cs.ucsb.edu/16wiki/index.php/C%2B%2B:_Separate_Compilation_and_Makefiles)
* Compile-time errors
* Linker errors
* Header guards



## Lesson plan

* We will start with the code that we wrote in lecture 5 for drawing shapes and testing the functions we wrote with our home grown test framework
* Our first goal is to split our original implementation into multiple files in a way that maximizes reuse. For example we can reuse our drawTriangle and drawSquare functions to draw a house. However, this is not possible with the file structure in lecture 5. We'll discuss why that is.

* Once we have broken down our single cpp file into logical separate files, its time to compile the code. Our goal will be to select and combine the pieces that make a complete program

* If we tried to compile any one file (independent of the others), we are likely to get compiler errors and linker errors. You should be able to distinguish between these two types of errors and why they occur. To understand this distinction we need to peek under the hood of the compilation process and the intermediate steps that g++ takes to create an executable (see slides for more information). You will be introduced to object files - a very important concept for later lessons.

* We will first try to compile each file separately on the command line using the g++ option -c. For example

```
g++ -c shapes.cpp
```
The above command creates the object file shapes.o

We will then look at how to link all the object files into an executable using the -o option as shown below

```
g++ file1.o file2.o file3.o -o finalexecuatble
```
* Next we will automate this process by writing a makefile


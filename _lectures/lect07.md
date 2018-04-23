---
num: "lect07"
desc: "Program compilation, Makefiles, Data representation"
ready: true
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


* Automate the compilation of code from lecture 5 using makefiles

## Data and number representation

* Positional encoding: binary, hex, decimal
* Internal vs. external representation
* Conversion between different representations
* Key ideas: bits can represent ANYTHING. With n bits we can represent at most 2^N things
* Apply above rule to represent characters (ASCII), unicode, colors ....
* What is signed vs unsigned integer representation
* Signed representation used by modern computers: two's complement
* The data type of a variable determines its representation in memory AND the number of bits used to store each variable
* Model of memory

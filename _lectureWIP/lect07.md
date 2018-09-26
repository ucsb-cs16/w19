---
num: "lect07"
desc: "Program compilation, Makefiles, Data representation"
ready: true
pdfurl: /lectures/CS16_Lecture7.pdf
annotatedpdfurl: /lectures/CS16_Lecture7_ann.pdf
annotatedready: true
lecture_date: 2018-10-18
---


# Topics
[https://github.com/ucsb-cs16-s18-mirza/cs16-s18-lectures/tree/master/lec-07](https://github.com/ucsb-cs16-s18-mirza/cs16-s18-lectures/tree/master/lec-07)

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
* The data type of a variable determines its representation in memory AND the number of bits used to store each variable


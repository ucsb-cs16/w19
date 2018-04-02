---
num: "lect08"
desc: "Data representation, arrays, intro to lab04 "
ready: false
pdfurl: /lectures/CS16_Lecture8.pdf
annotatedpdfurl: /lectures/CS16_Lecture8_ann.pdf
annotatedready: false
lecture_date: 2018-04-30 
---
# Code from lecture


# Topics
This lecture and many of the coming lectures require that we understand how our programs interact with computer memory. This is not required to understanding some of the programming constructs like arrays and pointers but is crucial for reasoning about weird program behavior and debugging. So, we will begin with a model of computer memory and then delve into C++ arrays and pointers

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

## C++ arrays
* Intro to lab04
* C/C++ arrays are like lists in Python and Arrays in Java. We will discuss the differences between these.
* Declaring and initializing arrays in C++
* Tracing code involving arrays
* Array pitfalls: out of bound array access


## Test driven development

* Write test code and actual code side by side- so your implementation is always tested
* Start with function stubs
* Write the simplest test case and make your code pass that case
* Write another test case, expect your code to fail, see it fail, then add code to pass that test case (and the previous one).
* With every new test case, we have to make sure that all our previous tests still pass - this is a great way to make sure that things that were working before are not broken by new code!

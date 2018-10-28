---
num: "lect09"
desc: "References and Pointers, Call by value, address and reference"
ready: false
pdfurl: /lectures/CS16_Lecture9.pdf
lecture_date: 2018-11-01
---

# Topics

## Code from lecture
[https://github.com/ucsb-cs16-f18-mirza/cs16-f18-lectures/tree/master/lec-09](https://github.com/ucsb-cs16-f18-mirza/cs16-f18-lectures/tree/master/lec-09)

## C++ References
* Creating aliases with references


## Pointers

* Pointer declaration - difference/similarities with declaring basic types
* Accessing variables "indirectly" via pointers
* The address and indirection operators: "&" and "*"
* Differences between references and pointers
* Constant pointers and references, when and why to use them
* Pointers and arrays - similarities and differences
* Passing arrays to functions - specifically looking at how arrays degenerate to pointers on function calls.

# The good, bad and ugly about pointers

The good:

* Pointers allow arrays to be passed to functions efficiently
* Pointers allow arrays of large structs to be traversed effiently

The bad:

* Pointers can only point to one type of data (not generic)
* They don't automatically point - need to do some work

The ugly

* Bugs in code that involves pointers can cause your program to irrecoverably crash (Segmentation fault)
* Examples: dereferencing a null pointer, out of bound array access, dereferncing a pointer that has junk value.



## Call by value, address and reference
* Understanding the differences via stack diagrams
* When and why to use each of these





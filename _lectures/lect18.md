---
num: "lect18"
desc: "More or STL and final wrap-up"
ready: true
pdfurl: /lectures/CS16_Lecture18.pdf
annotatedpdfurl: /lectures/CS16_Lecture18_ann.pdf
annotatedready: false
lecture_date: 2019-03-14
---

## Correction from last time

C++ strings are NOT passed by reference. By default, they are passed by value, and you would need to use an '&' to be able to change the original string in a function.


## Review

Remember the two main ways to initialize pointers:
```cpp
   int *p;
   int num = 5;
   p = &num; // this pointer points to an item on the STACK
   ```
   ---
```cpp
   int *p;
   p = new int; 
   *p = 5; // this pointer points to an item on the HEAP
   ```
> What is an array?

An array is a list of elements, stored sequentially in memory.
The array variable itself acts like a pointer to the first element in that array.


  * * Except that you cannot change the value of that pointer -> it's illegal in C++ to change the memory address of an object.
> Why should we care about how arrays are represented in memory?

Having elements stored sequentially allows us to use access different elements by using either a [] operator or *pointer arithmetic*.
For example, `arr[7]` is equivalent to `*(arr+7)`. Notice how we are able to access specific element by adding the size of our data types 7 times to the pointer to the first element of the array.

> If  I want to create 3 pointers to integers, is "int* a, b, c" enough?

No! In fact, only a will actually be a pointer, and b and c will just be integers. Fix that by adding asterisks to b and c or using Typedef
typedef allows you to create a pseudonym for a data type. For example,
```cpp
typedef int* IntPtr
```
allows you to replace any mention of a pointer to an integer with "IntPtr". "IntPtr" and "int*" can now be used interchangeably.
Now, `IntPtr a, b, c` will create 3 pointers to integers, just like we wanted.

> What are dynamic variables and how are they different?

Dynamic variables in c++ are variables athat are created on the heap. They are created with the "new" keyword and have to be deleted with the "delete" keyword.
> What does it mean to delete a variable? How does that work?

Let's have an example. 
`Box* b1 = new Box{ {50,40}, 20, 50};` 
We have just created a Box on the heap. This means that memory was allocated on the heap for the box. If you are interested in how much memory was allocated, you can calculate that by adding all the sizes of member variables of the type Box.
* A Box has a Point, a width parameter and a length parameter. In total, that is 4 integers that represent a Box, so a size of a Box object is 16 bytes.
Since we are dealing with the heap, c++ will not automatically get rid of our Box when the time comes. We need to get rid of that memory ourselves, or else we would get a memory leak.
`delete b1` frees up the memory that was taken up by our Box, and we could reuse it later.
 * Notice that even though the comand said `delete b1`, our b1 did not go anywhere. In fact, it has the same address inside, but no object exists in that location anymore.
 
 ## STL Vectors
 
STL vector is a c++ class from the standard template library that behaves like a linked list.
* IMPORTANT: Don't be confused. A vector is implemented using a dynamic array, but it *behaves* like a linked list. For example, you can add and delete elements, changing the size of the vector. This is done automatically by the class, so you don't have to worry about the details of implementation.
Vector will have a flexible size and some nice built-in functions.
* `size()` returns the number of elements in the vector
* `operator[] or at(int)` returns the element at the specified location
* `front()` returns the first element
* `back()` returns the last element
* `push_back()` inserts a new object in the back of the vector.


To use vectors:
* `#include<vector>`
* specify the object type at the time of creation: `vector<int> nums(10); `
* use `push_back()` to keep adding on to the vector

## More review!

`str.size()` returns an unsigned integer - length of a string cannot be negative, so use an unsigned int in the for loop

> Again, what is the difference between dynamic Arrays and linked lists?

* Arrays allocate contiguous memory space, linked list links variables of arbitrary elements
* The name of a dynamic array refers to memory that is fixed; the address of the head of the linked list can be changed

Pointer diagrams will still be relevant for the final!
 * Pointers themselves can either be declared on the stack or the heap

Deleting a dynamic array: `delete[] d` deletes all of the elements in the array that d points to.

Review True/False questions on slides!
 *Answers:  T F T F F





 

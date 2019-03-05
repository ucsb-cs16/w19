---
num: "lect14"
desc: "Linked lists"
ready: true
notes: https://1drv.ms/f/s!AlgIeD1urAgmegsFAP4XW6tA9jE
lecture_date: 2019-02-26
---

## Recap

### Dynamic memory / the heap

It's important to know the difference between the stack and the heap

The stack is where all local variables are stored - variables on the stack are destroyed automatically when they go out of scope

The heap is where all dynamic variables are stored - they are created with "new" and never go out of scope, but must be destroyed with the "delete keyword"
* Objects on the heap:
  * Don't have names, and can only be accessed by pointers
  * Can be lost forever if we lose their address (stored in a pointer). This is called a **memory leak**.

Example code: 

~~~cpp
int* p = new int;  //creates an integer on the heap and saves its address in p, created on the stack
delete p; //deallocates memory for that integer object. the value inside p is unchanged, but there is no object on the heap at that address

int size = 7; //size is an int created on the stack
int* a = new arr[size]; //creates an array on the heap of size 7, and saves the address of the first element in a.
delete [] a; //deallocates memory for the entire array
~~~

## Lecture material
### Intro to Linked lists

> What are linked lists?

A linked list is a simple data structure that has nodes on the heap, and each node has a value and a pointer to the next node in the list.

A linked list itself has pointers to the first and last nodes.

Take a look at the written notes (link at the top of the page and on Piazza) to get a sense of how a linked list is represented in memory


> Why use Linked lists?

Arrays are convenient because all elements are right next to each other in memory and can be quickly accessed

But you cannot add new elements or quickly delete any - the size of an array is fixed, even of a dynamic one.

* A linked list is **not** a dynamic array!
   * A dynamic array is just an array on the heap - they are different because their size can be defined at runtime.

Arrays aren’t good for everything!

### Structure of linked lists

Nodes are not next to one another in memory and are only connected to each other by pointers
New elements can be inserted anywhere by correctly reassigning pointers.

Every Linked List has a head pointer to the first node of that list, tail pointer to the last node.

Take a look at the example code from lecture, where a linked list is created and filled with values.

An empty linked list has a NULL head and tail.

It turns out you can traverse through linked lists pretty easily!

* Set a pointer to a Node to the first Node of the Linked List (head).
* Remember to always check if a Linked List is not empty first! If you have an empty linked list, and you try to dereference the head, you will get a segfault!
* While you haven’t reached the end of the list, keep traversing - follow "next" pointers of every Node.
* You have reached the end of the list when the "next" pointer of the Node you are at is NULL.
* For loops or while loops will be super useful here!

We will continue talking about Linked Lists in the next lectures.





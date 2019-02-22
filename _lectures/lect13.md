---
num: "lect13"
desc: "Double Linked lists, more memory management"
ready: false
pdfurl: /lectures/CS16_Lecture13.pdf
annotatedpdfurl: /lectures/CS16_Lecture13_ann.pdf
annotatedready: false
lecture_date: 2019-02-21
---

# Recap

3 different ways to pass an variable into a function

let's look at how we could implement initBox() that takes a box and initializes its member variables to 0.

* Pass by value -- `void initBox(Box b)`

Local copies are created, any changes within a function are not applied to the original object passed in.
Local copy is lost after the function returns.

* Pass by reference -- `void initBox(Box& b)`

A reference (nickname) to an object is created. Memory management is highly efficient. Any changes to a local reference are applied to the original object as well.

* Pass by address (also called bass by pointer) -- `void initBox(Box* b)`

A pointer is created, which allows us to access the original object through dereferencing. Memory management is highly efficient.
If a box has a width member variable, access it either by `(*b).width` or `b->width`.


* A reminder about the asterisk operator (*)

When you use * when declaring a variable, you are creatina a pointer of that type
`char* ch` -> ch is a pointer to a char

When you use * anywhere else, you are dereferencing a pointer
```
char* ch;
char c = 'a';
ch = &c;
*ch = 'b' // c now holds a 'b' inside.
```

# Lecture material

## Memory: stack and heap

Stack and heap are used to refer to two different regions of memory. Stack is automatically managed (you don't have to worry about deleting your variables to free up memory), and heap is not. 

So far we have only been using the stack in our programs - all variables, arrays, structs you create have been stored on the stack. Now we will learn how to use the heap. Let's create an array of integers on the heap!

Recall that the name of an array acts like a pointer: 
```
int arr[] = {14, 15, 67, 34};
//arr[2] is the same as *(arr+2), and gets us the third element in the array.
```
We can create objects on the heap by using the 'new' keyword.
```
int* arr = new int[10]; //creates an array of size 10 on the heap and saves the address of the first element in arr
```

Remember that before we had to know the size of an array at compile-time? This limitation is not present when using the heap!

```
int size;
cin >> size; //size is set by the user
int* arr = new int[size];
```




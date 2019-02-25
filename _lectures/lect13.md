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

There are 3 different ways to pass a variable into a function

Let's look at how we could implement initBox() that takes a box and initializes its member variables to 0.

* Pass by value -- `void initBox(Box b)`

A local copy of a box will be created, any changes within the function are not applied to the original object passed in.
The local copy is lost after the function returns.

* Pass by reference -- `void initBox(Box& b)`

A reference (nickname) to an object is created. Memory management is highly efficient. Any changes to a local reference are applied to the original object as well. **Arrays are always passed by reference.**

* Pass by address (also called bass by pointer) -- `void initBox(Box* b)`

A pointer is created, which allows us to access the original object **through dereferencing**. Memory management is highly efficient.
If a box has a `width` member variable, access it either by `(*b).width` or `b->width`.


* A reminder about the asterisk operator (`*`)

When you use `*` to declare a variable, you are creating *a pointer of the specified type*:
`char* ch` -> ch is a pointer to a `char` variable

When you use `*` anywhere else, you are **dereferencing a pointer**
```
char* ch;
char c = 'a';
ch = &c;
*ch = 'b' // c now holds a 'b' inside.
```

# Lecture material

## Memory: stack and heap

Stack and heap are used to refer to two different regions of memory. Stack is automatically managed (you don't have to worry about deleting your variables to free up memory), and heap is not. If you create something on the heap, you need to make sure you 'free up' all the memory you have used. Otherwise, you run into a **memory leak**, which can be a major problem in bigger applications. Always made sure to delete all heap objects before the end of the program.

So far we have only been using the stack in our programs - all variables, arrays, structs you create have been stored on the stack. Now we will learn how to use the heap. Let's create an array of integers on the heap!

Recall that **the name of an array is a pointer to the first array element**:
```
int arr[] = {14, 15, 67, 34};
//arr[2] is the same as *(arr+2), and gets us the third element in the array.
```
We can create objects on the heap by using the `new` keyword.
```
string* sp = new string; //sp is a pointer on the stack pointing to a string on the heap. Dereference sp to access the string itself.
int* arr = new int[10]; //creates an array of size 10 on the heap and saves the address of the first element in arr
```

Remember that before, we had to know the size of an array at compile-time? This limitation is not present when using the heap!

```
int size;
cin >> size; //size is set by the user
int* arr = new int[size];
```

You now can use this array just like you would use it normally, and it's not deleted at the end of the function like an array on the stack would!

> But what if I want to delete that array?

To delete elements from the heap, you would also use a keyword `delete` + a pointer to free up the heap at that memory location.

To delete the entire array, use ``` delete [] arr```, if arr is the pointer to the first element. **Remember the brackets!** Forgetting them will delete only the first element of the array.

Remember that dereferencing a NULL pointer will result in a segmentation fault. 0 is a memory address reserved by the operating system, and is commonly used as the default value for pointers.

> But isn't it a bad thing to get a segmentation fault if a NULL pointer gets dereferenced?

Yes, it is very-very bad, but it's worse to not initialize your pointers at all. Accessing random memory locations might result in logic errors and data corruption, which arguably is worse than your program crashing.

### Recap

* Stack and heap are different regions in memory. 
* Stack is managed by C++, and heap is managed **by you** using `new` and `delete`! 
* To create objects on the heap, use the `new` keyword. When you create objects on the heap, you have a connection to them by having the pointer pointing to the memory location where the object is created.
* Make sure to 'free up' all the memory from the heap by using the `delete` keyword. Remember the brackets, when deleting arrays.

## Organizational notes:

* Midterm 2 is on Thursday, Feb 28!
* There is going to be a review session on Monday, Feb 25. TAs and tutors will go over the practice tests and answer any questions. The exact information will be posted on Piazza.
* Lab05 and Lab06 are due on Tuesday. Remember that Lab06 is optional, but highly recommended.




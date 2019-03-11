---
num: "lect17"
desc: "Recursion"
ready: false
pdfurl: /lectures/CS16_Lecture17.pdf
annotatedpdfurl: /lectures/CS16_Lecture17_ann.pdf
annotatedready: false
lecture_date: 2019-03-12
---
**Notes:**
* Deleting a node in a linked list is covered very well in the book, in Chapter 13 around page 755 
    * An important topic to know for final/ future CS classes 
* Will be posting associated readings for lectures
* In the last week, we will be holding extra office hours/ final review during lab sections, so please take advantage of this time to ask any questions!
* Lab08 is due next Friday
* Also review the recursive "write vertical" function in the book
  * The book uses integers, so also a good review of division and modulo tricks to isolate the digits of a number
  * We have created a very similar sample problem-- print the characters of the word vertically
* You can use i`salpha()` to identify which chars are not letters, to pull out punctuation from a word (will need for lab)

**IMPORTANT!**
* Pointers are *not* automatically initialized to `NULL`! They are initialized pointing to a junk value-- it is good practice to set ptrs to `NULL` when you first declare them
* Order of operations with dereference operator `*`
* The `*` has very low precedence (often executed last), so should always dereference **first, within parentheses** before trying any operations on the variable being pointed to

**Recursion**
* Something that calls itself
* Recursive definitions you may be familiar with: `Node`, which contains a `Node*` pointer within its definition
* Recursive functions call themselves to execute the same operations over and over
  * Often, a recursive function can be written iteratively (with a loop), but they behave differently
* On the final exam, pay attention to whether a question is asking for a recursive or iterative definition

**Why use recursion?**
* When we don’t know how many times we want to repeat an action
* To break a task down into smaller tasks
* Examples of recursion on slides!
    * Dishwashing example:
      * First: Check if there are dishes
      * If there are none, then do nothing
      * If there are dishes, wash a dish, then repeat the process with the remaining stack of dishes

* The **base case** is the simplest case 
  * First step in writing a recursive algorithm is determining the base case
  * All recursive functs must have a base case, so they know when to stop
  * Factorial example on slides

* Every time you recurse, you add another frame to the stack
   * Once you hit the base case, the function resolves itself up the stack
   * If you never hit the base case, you keep adding to the stack
      * There is a limit on stack space, so if you recurse infinitely, you will get a *stack overflow*
      * Can an infinite loop cause a stack overflow? 
        * If you are calling functions within the loop that are allocating space on the stack

* Recursive calls unwind once the base case is reached
```
fact(5) -> 5 * fact(4) -> 4 * fact(3) -> 3 * fact(2) -> 2 * fact(1) -> 1
fact(5) -> 5 * fact(4) -> 4 * fact(3) -> 3 * fact(2) -> 2 * 1
fact(5) -> 5 * fact(4) -> 4 * fact(3) -> 3 * 2
fact(5) -> 5 * fact(4) -> 4 * 6
fact(5) -> 5 * 24
fact(5) -> 120
```
  * fact(5) returns 120

* A recursive definition of an array:
  * A single element, followed by the rest of the elements
  * Every time you step down an array, it can still be thought of as a single element, followed by a (smaller) array everytime
* A recursive definition of a linked list:
  * One node, followed by a chain of other nodes
  
* How can we tell if there is a single node in the list?
   * Head and tail point to the same location
   * Or Head-> next is NULL
   * Or Tail-> next is NULL
    * These are equivalent statements

* Question on slides- sum of nodes in linked list. How will the given function behave?
  * It will crash with a segfault- there is no base case to catch the end of the list, so you will end up trying to dereference a null or an undefined pointer
  * Here, the base case is "head is `NULL`". If head is `NULL`, `return 0;`
  * Else call the function recursively
  
* Can I have more than one call to a recursive function within a recursive function?
   * Why not?
   * However, know that every time you call it, if will place another frame on the stack
   * Several recursive calls happening at once will add many frames to the stack

* See slides for info on helper functions
* The following functions are fair game for the final:
  * Recursive search of a linked list
  * Find the min/ max elements of a linked list recursively
  * Given a linked list, implement a recursive function to check is a value is present in the linked list
  * Given a linked list, implement a recursive function to delete all nodes in the linked list
  * Given a linked list, implement a recursive function to delete the node with a specific value
  * Given a sorted array, look for a value using a binary search 
* Slides will be released with the above problems!

**Recursion:** Remember that every time you call the recursive function again, you should have made the problem smaller!

* Fibonacci Series Example:
  * The first two elements in the series are 1s, the subsequent elements are the sums of the two previous elements
  * Write a recursive function to determine the nth term of the Fibonacci sequence
```
int f(int n){
    if(n<=1 && n>0)
    { return 0;} 
else   //n>= 2
    { return f(n-2) + f(n-1); } 
}
```

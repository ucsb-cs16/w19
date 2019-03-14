---
num: "lect17"
desc: "Wrap up and final review"
ready: false
pdfurl: /lectures/CS16_Lecture17.pdf
annotatedpdfurl: /lectures/CS16_Lecture17_ann.pdf
annotatedready: false
lecture_date: 2019-03-12
---
**Lab09 is just for practice, graded for participation**
* We have no autograder set up, so you won’t be getting feedback on your submission, but then you will know what you got stuck on and can ask extra questions on Piazza, in office hours, or in open labs

**Notes:** 
* Remember that you use the *dot operator* to access the member variables of an object of a struct on the *stack* 
  * When you can access the object directly, rather than through a pointer
 * Use the arrow `->` to access the member variable of the object that a pointer points to

* How do you dynamically create a linked list on the heap?
    `linkedlist* ll = new linkedlist;`

* How do you add a Node to the list?
    * `ll->head = new Node;`
    * `ll->head->value = 42;`
    * `ll->head->link = NULL;`

Pass ll->head as value or reference?
What’s the difference?
ll->head will be copied if passed by reference, and will never be changed
ll-->head will be added a reference to and change if passed by reference. This is necessary when deleting nodes, since you might have to repoint the head accordingly. 

**Notes on pointers:**
* When you declare a pointer, it *does not* default to `NULL`! By default, it will point to a garbage value- you must assign it to `NULL` (or to any address) yourself
* If you assign a variable to `NULL`, then that variable *must* be a pointer!
* If you use the `new` operator, then the left side of the statement must be a pointer
  * `new` returns a pointer to a new space in the heap, which is assigned to the pointer you created
* When you create something on the heap, it has no name- that means it can only be accessed through the pointer you assign to it
   * `int* a = new int;`
   * This integer can now only be accessed through the pointer `a`
      * `*a = 12;`

**Identifying a Linked List:**
* The struct may not always be called `linked_list`- it can have any name and still behave as a linked list
* Always has at least 2 member variables of the same type:
* Two pointers, one to start/head/first, one to end/tail/last
* The pointer type is whatever struct you are using as your nodes in the LL
* When you test linked list functions, make sure you have at least 3 nodes
* Beginning, middle, end each have different cases that must be accounted for
* **When you write linked list functions, make sure you always check for `NULL` pointers before you dereference anything!**

**Q:** What is mutable within a function?
* Mutable- passed by reference
* Arrays are always passed by reference

**Quiz Today**: Given node and linked list structs, write functions to insert a node to the start and end of the list

**The C++ Standard Template Library (STL)**
* A standard code base of common data structures with built-in functions, to avoid having to constantly re-implement more complex structures from scratch
* Has prewritten data structures we have used: arrays, linked lists, and much more
* Contains the vector class (stay tuned!)

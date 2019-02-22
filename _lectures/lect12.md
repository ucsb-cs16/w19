---
num: "lect12"
desc: "References, Pointers, Passing Parameters to functions, Structs"
ready: true
pdfurl: "https://drive.google.com/open?id=1qG48RYFvB7VVEU7yP3eCkG8KRVA9KtYw"
lecture_date: 2019-02-19
---

### Readings for today's lecture
* Section 4.5: Scope and Local Variables
* Section 5.2 : Call-by-Reference Parameters
* Section 7.2: Arrays in functions
* Section 9.1: Pointers
* Section 10.1: Structures

### Reading for next lecture
* Section 9.2: Dynamic Arrays


Today's lecture focused on reviewing concepts from [Lecture 11](https://ucsb-cs16.github.io/w19/lectures/lect11/).

Slides were updated with the additional, hand-drawn diagrams to emphasize that the value of a pointer is an address (different from its own address).

Based on students' requests on the course eval survey, homeworks are making a comeback: they will now be focused on what the exam will cover. The next homework is optional (see below) but the subsequent homeworks will earn you points, in addition to preparing you better for the exam.


### Quizzes

* Unless otherwise specified in the lecture, quizzes are *graded for completeness*, not correctness: i.e., as long as you submit the answers in class, you’ll get full credit for that quiz. *We reserve the right to not accept your quiz if you are not present when the quiz is distributed.*
* Quizzes on Gradescope will show deducted points mainly as a *feedback mechanism* so that you see what we expect or are looking for. Those points are an indication for you that this is the score you could have gotten, if this was a question on the exam.
* Let me repeat, unless otherwise specified during the lecture, as long as you submit the answers in class, you’ll get full credit for that quiz. *We reserve the right to not accept your quiz if you are not present when the quiz is distributed.*


### HW 4

* Hard copies were distributed in class. You can pick them up during labs on Wednesday, and Prof. K will bring the extra copies to the Thursday lecture. 
* You can turn in the homework to Prof. K **on Thursday before/after the lecture**. You can turn it in **on Friday by 4:45pm** by dropping it off in the CS16 homework box in HFH building (the copy/mail room next to the CS Advising office 2104, across from Prof. K’s office in 2107). 
* Submitting this homework is **optional**, although, since we will provide feedback to you before the weekend, it will help with studying for the exam and during the review session. Getting feedback on the correctness of your submission should be enough incentive to turn it in, so no additional points will be provided for its completion.

**Update**: Based on students' requests we set up Gradescope to accept student submissions: you now have the option of uploading your submission yourself.

## Lecture Notes:

**Note:** To change a function that takes arguments by copy / by value to a function that takes arguments by reference, just add the `address-of` operator (`&`) in front of the arugments in the function header. See slides for examples.

## Pointers

* Use `&` to assign the address of an existing variable to a pointer. (The pointer will then point to this variable)
* To access the value of the variable that a pointer is pointing to, use the `dereference operator`: `*`
* A pointer has its own address, and it holds the address of another variable
* When drawing pointer diagrams, don’t forget to draw boxes for pointers - it’s a variable just like everything else.
  * See rewritten swap function using pointers on slides

* Why use pointers? We already had a working function that did what we wanted without needing pointers, and they seem like an extra hassle-- so why?
  * We care about pointers for a few reasons.
    * Pointers and arrays:
      * Recall that we couldn’t return an array from a function
      * An array is like a pointer to the head of array
      * See slides for diagrams and explanations
    * Essentially, we can take a ptr to an array in a function and use it to change values in memory, so we can change the vals in the array themselves
**Note:** Setting a ptr to 0 makes it a NULL pointer (a pointer that points to nowhere)! 

* Q: Does “`*x = *y`” mean make `x` point to the same thing as `y`? 
  * A: No, it sets the *value* that `x` points to whatever value `y` points to.
* Q: `*(arr+2)` - Is this adding 2 bytes to the memory location stored at `arr`? 
  * A: Since the type of `arr` is `int*`, and integer is 4 bytes, `arr+2` adds 8 bytes to memory location. The means we are looking at the memory location 8 bits away from the location of whatever `arr` is pointing to. 

Helful online visualization of C++ programs (may help to understand pointers): [http://pythontutor.com/cpp.html#mode=edit]

## Structs

* A bunch of variables that, taken together, describe an object 
  * Structs are a simple data structure
* **EX**: A coordinate point has values `x` and `y`. Rather than have two disparate variables, we can put these into a struct to indicate that, taken together, they relate to the same object (a certain `(x,y)` for a particular point)
  * These variables are known as member variables  (since they are members of a larger struct)
* Create an instance of a structs like so: `Point p = {10,20};`
  * The member variables are initialized in curly braces.
* **Example struct syntax:**
`Struct Name{
    String first;
    String last;
    Int age;
};`
* Don’t forget the semicolon at the end of the struct definition!
* To access member variables, use the dot operator `.`
  * **EX:** 
    `Name n = {"first", "last"};`
   ` cout<< n.first; //prints "first"`
* Accessing them allows you to: print, compare, or change the values of those mem vars
* If one of the member variables is also a struct, use the dot operator once more to access the member variables of that struct 
    * See slides for Point / box example!


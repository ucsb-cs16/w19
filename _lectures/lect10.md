---
num: "lect10"
desc: "Numerical Base Conversions, C-strings vs C++ strings"
reading: "Sections 5.3, 5.5, 8.1, 8.2 + lecture notes"
ready: true
pdfurl: "https://drive.google.com/open?id=1qG48RYFvB7VVEU7yP3eCkG8KRVA9KtYw"
lecture_date: 2019-02-12
---

# Announcements:
* From now on, we will be reviewing the code you submit on Gradescope for style and commenting! 
  * At the bottom of each lab writeup, there is a checklist for what we will be looking for in terms of style (how your code is formatted- brackets, spacing, etc). Please read through this list before submitting your final code so that you don't miss easy points. Good code style is an important skill to develop, because you will often have other people reading through your code and you want them to focus on the content of the program and not struggle to understand it because of the formatting. 
  * By comments, we mean *preconditions and postconditions*. There are examples on the lecture slides and in the book of what we are looking for, but remember to add these conditions for every function that you write (whether you write it from scratch or are simply filling-in a stub from given code).
    * Precondition: What you expect the function to receive
    * Poscondition: What you expect will be true once the function has completed
    * These should be added as a pair of comments right before each function
    * *If you update your function*, make sure to read over your pre- and post- conditions to make sure they still make sense and match the new code. Update them if necessary as you edit your code.
    
## Notes on Testing and Debugging:
* Testing allows you to examine functions one at a time as you write to make sure they do what you want/expect, before you incorporate those functions into larger programs
* **Stubs** are commonly used when you want to test a function that relies on other functions that you have not yet written/tested
  * Write some simple fixed output/ behavior in those functions to yield an outcome you expect in the function you are currently writing/ examining
* When debugging, **don't just randomly change code**! Try to trace through the program and at least locate where you suspect the error may be occurring
  * Randomly changing code is a poor strategy, especially as programs become more complex. You may sometimes be able to fix code in this way, but you might not understand why. If this is the case, try to explain what you did to understand why it worked, or ask a TA or tutor to help explain. Understanding is more important than a full score on Gradescope.
* When you're trying to figure out a problem in your code, the "rubber duck" strategy is a good one: Try to explain your code to a person or random object (a rubber duck, for example). Talking about it out loud often helps you encounter errors you may not have otherwise noticed.
* Keep an open mind about debugging. Don’t assume the bug is in a particular location.
* Check for common errors (whitespaces, = vs ==, incorrect syntax, missing curly braces, boolean algebra)
* Localize the error. Printing is very helpful, so is C++’s internal debugger gdb (you will use it in CS24) 
* Common or tricky errors with autograder are often related to whitespace or newlines, spelling, etc.
  * Examine the error message outputs, compare spaces to double-check
  
## Notes on Initializing and Using Stream Variables:
* `ifstream ifs;` just creates a stream variable named `ifs`. It currently doesn’t do anything/ isn't connected to anything.
* `ifs.open("filename")` connects it to a given file, and the path needs to be passed as an argument. Often, the file is in the same directory, so the path is just the filename.
* There is no stepping backwards through a file with an ifstream
* `string oneline;` creates an empty string, simply a place to hold the string of the current line of the file you are examining
* `getline(ifs, oneline)`:  `ifs `indicates the location of the line you want to *get*, `oneline` indicates the location you want to *store* that line at as a string
* When you call `getline` again, you will have already processed the line you just got, so it will then get the next line
  * use a `while` loop to get lines repeatedly until you reach end of file
* At the end of the file, `getline` will get an "end of file character"
  * If you call `getline` again, it will still be end of file, so you may end up getting the "end of file" twice when using a loop
 
 # Lecture Material
 
 ## Counting Numbers in Different Numerical Bases:
 * Computers count in base-2 (binary→ 0s and 1s), but we count in base-10 (decimal→ 0-9). This is because bits on hardware are easily represented in binary- they are tiny switches that are either on or off.
 * Other 2-related bases for counting in are:
   * Octal- base-8→ 3 bits (2<sup>3</sup> = 8)  (0-7)
   * Hexadecimal- base-16 → 4 bits (2<sup>4</sup> = 16) (0-9, A-F)
     * `A=10, B=11, C=12, D=13, E=14, F=15`

### Positional Notation 
* In **Decimal**:
  * Each position corresponds to a different power of 10
    * 642 = (6\*10<sup>2</sup>) + (4\*10<sup>1</sup>) + (2\*10<sup>0</sup>)
* Using the same principle, we can convert from **any** base into decimal 
  * What is 642 in base-13??
  * Each position is a power of 13
  * (6\*13<sup>2</sup>)+(4\*13<sup>1</sup>)+(2\*10<sup>0</sup>) = 1063
 
### **Converting Binary to Decimal**
 * What is 1011 (base-2) in decimal?
    * Start with the rightmost digit, 2<sup>(0)</sup>, and move up, multiplying by a larger power of 2 every time.
      * 1\*(2<sup>3</sup>) + 0\*(2<sup>2</sup>) + 1\*(2^<sup>1</sup>) + 1\*(2<sup>0</sup>) = 8 + 0 + 2 + 1 = 11
 * What if you add a bit to most significant end?
    * Now the binary number is: 11011 (which is 10000 + 1011 in binary)
    * Perform the same operations, but add 1\*(2<sup>4</sup>) = 16
      * 16+11 = 27
  
### **Converting Binary to Octal or Hexadecimal**
* Group the bits!
  * For octal, group the bits in the binary number by 3, starting from least significant (far right)
    * Because binary is base-2, and octal is base-8, which is 2<sup>3</sup>
  * For hex, group by 4s from far right
    * Because binary is base-2, and hex is base-16, which is 2<sup>4</sup>
  * Examples on slides!

### **Algorithm for converting Base-10 to other bases**
 * Available on slides in much greater detail (with examples)
    * Overview for **binary** example:
      * Divide decimal number by 2- the remainder will be 0 or 1
       * Add this to the left as the most significant bit of the the binary number you are producing
       * Divide the remaining “half” by 2, repeat w remainder, etc  until remainder is 0
       * The string of 1s and 0s you have produced from the remainders is the binary conversion
    * This process can be done with **any** number base- just divide by that base number repeatedly, rather than by 2
  
### **Why is this useful?**
  * Basics of memory manipulation and understanding
  * This is how everything is represented in memory
  * “Reverse engineering” of binary representations of objects
  * Pointers access, use, trade memory addresses
  * Memory addresses are *hex values*
  * You will be using hexadecimals when you assign pointers.
  
## C-strings vs C++ Strings
 * C++ is an advanced version of C, but there are residual parts of C that still exist 
 * Strings did not exist in C -- they used to be represented as special arrays of characters, which are known today as **C-strings**
   * To use C-strings, you must include the cstring library: `#include <cstring>`
 * Modern C++ strings are most common and useful for all text purposes
   * They have their own useful library of functions 
* C++ is backwards compatible - can still use anything from C in a C++ program
   * This doesn't work both ways - you cannot use C++ operations in a C program

* Why do we still care about C-strings, if they are legacy code?
  * They are still incorporated into certain actions - in some cases, you have no choice but to use a C-string
    * The most important use of C-strings if with Command Line Arguments (CLA)
      * When using CLA, the arguments are *only* taken in as C-strings in `argv`
      * `char*[]` is a classic C-String definition
    * This is why you have to use special functions to convert those arguments to other formats
     * `atoi` takes a C-string, returns integer value
     
* The main difference between C++ string and C-strings is the *null character* **`\0`** and built-in functions.
  * All C-strings are arrays of characters, with the text terminated with `\0` (the null character)
    * The null character terminates the *text*, but not necessarily the array! There may be a bunch of extra empty spaces in the array you don't know about, but they shouldn't affect the behavior of the C-string.
  * In contrast, strings in C++ are actually instances of a class, with built-in member variables and functions
    * Examples of strings syntax on slides
* You cannot use = or == operators with C-strings
   * Also cannot change the contents of a C-string by setting it to something else!
   * `char[] s = “Bill”; // contents are:  ‘B’  ‘i’  ‘l’  ‘l’  ‘\0’`   
   * `s = “jack”; //INVALID`
   * Use strcopy, strcompare, etc, as shown on slides

* You will use regular C++ strings for almost all text values!
 * Declare and initialize using the syntax shown on slides
 * They are made up of characters, so you can use the square brackets `[ ]` to index specific locations to access those characters, as you would with an array
 * stoi takes a c++ string, returns integer value
 * `.length()`, `.size()` are exactly the same- both return the length of the word
 
 **Note:**
 * The length of a C++ string = the number of characters in the word
 * The length of a C-string = the number of characters in the word **+1** (to accommodate `\0`)
  * The null character `\0` is counted as part of the length
  
  
## Next time:
* Pointers!

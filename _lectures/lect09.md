---
num: "lect09"
desc: "References and Pointers, Call by value, address and reference"
ready: false
pdfurl: /lectures/CS16_Lecture9.pdf
lecture_date: 2019-02-07
---

# Recap from last time: reading from a file
* How to look through a file using an `ifstream` variable
  * Keep getting lines from a file using `getline()`
  * Use `eof()` to check if the end of file has been reached (remember what it returns?). May be useful to put it in a condition inside a `while` loop.
* Difference between `get()` and `getline()`, and how to customize `getline()`
  * `get()` function deals only with characters: gets the next character, including spaces and newlines as individual characters
	* `getline()` deals only with strings - continues until encounters a newline character, **not including the newline**
	* you can customize getline’s delimiter, i.e., what character you want it to stop at. Default is the newline `\n`, but you can set it to anything
  `getline(*ifs*, *string_var*, 'm')` - `'m'` is the delimiter, stores a string up until the character `m`
  
  * `cin` is a also a variable of type `ifstream`!
   `getline(cin, *string_variable*)` works too!
   * `cin` indicates that your input stream is coming from the keyboard
   * `ifstream` variables deal with different sources of input
   
# Lecture material
## Arrays in C++

* Arrays allow to store a list of things (variables, objects) of the same type
  * cannot mix different types of variables! (unlike python lists)
* practical for storing lists of information, as opposed to manually making declarations for every single variable in the list
* the array starts at 0, not at 1
  * double check this when you work with arrays, otherwise this could create errors, and potentially corrupt data
  * can pass **index** as a number or an integer variable
  * when working with arrays in functions, **pass their size into a fuction as a formal argument**.

### Syntax
* declaration for an array
```cpp
int MyArray[5]; // 5 unitialized int varaibles
int MyArray[] = {1, 2, 5, 7, 0}; // declares an array and initializes it with specified values 
//array size here is implied to be 5, because 5 elements are given
//note that here you must keep track of the array size yourself!
//You can save it as a variable to easily pass it into functions later.
int MyArray[5] = {1, 2, 5, 7, 0}; // also legal! This is clearer, since you are being explicit about the size.
int arr[7] = {3,2}; // first two elements are 3 and 2, the rest are 0s
```
  * if you don't assign any values, initially your array will contain junk values. 


* you **cannot use variables to _declare_ arrays**, but you can use variables as **indices** of your array
  ``` cpp
  int a = 9; 
  int arr[a];  //ILLEGAL!
  //Part of it is because the compiler needs to know how much memory to allocate at compile time, 
  // but variables can change during runtime
  //if a is constant (const int a = 7;), you can get around this, because its value will not change during runtime.
  ```
* Examples for loops and arrays on the slides!
  * Use index variable of loop to iterate through positions in the array

### More on memory
* memory is allocated for an array, but the compiler needs to know three things
  1) starting location /address of array
  2) how many elements
  3) what is the data type of the elements
* The elements in an array are adjacent in memory! This will be important when we talk about pointers and how traversing through an array works. Remember that memory allocated for the entire array cannot change during runtime.
> What if I go out of bounds of an array?
* Bad things may happen. You might corrupt your data, mess with other variables, or could potentially hit a segfault if you go out of bounds of memory allocated by the OS for your program.
* If the size of your array is 10, the last element you should reach is a[9]. a[10] points to a memory location that is not within the array!

### Arrays in functions
* The function header should be aware that it is taking in an array: add the brackets
	* ` int funct(int x[], int size); `
  * don't specify the size of an array in your function call -> square brackets is all the compiler needs to know to expect an array
* don't forget the size of an array as your other argument.
* when passing an array to a function, don't include the square brackets -> the compiler already knows it's an array
  * call to the function funct() from above will look like:
  ```
  int arr[] = {2,3,5};
  funct(arr, 3);
  ```
* Can you calculate the size of an array inside a function? Kind of, but only with (auto:) that we haven't covered or with dynamic arrays, not regular arrays
  * You will learn about dynamic arrays after you learn about pointers

* Functions cannot return arrays! Only pointers to arrays.

## Makefiles & header files

* Flags in Makefiles
  * Indicate flags in the commands to slightly change the behavior. You already know -o and -std=c++11. -Wall is another one to output all warnings the compiler has.
* Makefile commands don't have to be g++ commands!
  * clean command that will remove the .o files created during compilation and the default executable if they exist.
  ```
  clean:
	  rm a.out *.o 
  ```
  * As always, call this command by typing its name after a call to make: *make clean*
  * Make sure not to delete any important files! Files deleted with rm cannot be restored.
* Calling make without specifying targets will execute the first command
* You can add .o files as dependencies for your targets. This way the .o files will be produced before the make command is executed. If there is no command correcponding to creating .o files, Make will attempt to create them from .cpp files for you!

### Header files
* header files: why do we need them? 
  * They contain function declarations (return type, name and variables, not actual instructions) that can be used in other programs.
* header files (.h) should always have a corresponding .cpp file with function definitions (actual code)
* EXAMPLE
  * let's say you have a file arrayFunc.cpp that has functions to calculate the minimum, maximum, and average of an array.
  * header file will contain:
  ```
  int maximum(int arr[], int size);
  int minimum(int arr[], int size);
  double average(int arr[], int size);
  ```
  * and the code for those functions will be in the correcponding arrayFunc.cpp .
  
* If you want to use those functions in another program, say, main.cpp, you must let the compiler know where you're getting the functions from.
To do that, write #include "arrayFunc.h" at the top of main.cpp.
  * #include <> is used to search in the Standard Template Library
  * #include "" is used to search for the local files. Don't be confused.

* Compile like this: 
  ` g++ main.cpp arrayFunc.cpp `
  * or
  ` g++ main.o arrayFunc.o `
* We did not include arrayFunc.h in the compilation command, because main.cpp includes it, and the linked takes care of that automatically.

## Notes
* You will pratice dealing with header files, Makefiles, and arrays in lab04
* Next time we will talk about pointers!
  


    


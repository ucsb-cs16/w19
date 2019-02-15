---
num: "lect09"
desc: "Arrays and Makefile"
ready: true
pdfurl: "https://drive.google.com/open?id=1qG48RYFvB7VVEU7yP3eCkG8KRVA9KtYw"
lecture_date: 2019-02-07
---

# Recap from last time: reading from a file
* How to look through a file using an `ifstream` variable
  * Keep getting lines from a file using `getline()`
  * Use `eof()` to check if the end of file has been reached (remember what it returns?). May be useful to put it in a condition inside a `while` loop. (Note: this is apparently [not a good practice](https://stackoverflow.com/questions/21647/reading-from-text-file-until-eof-repeats-last-line))
* Difference between `get()` and `getline()`, and how to customize `getline()`
  * `get()` function deals only with characters: gets the next character, including spaces and newlines as individual characters
  * `getline()` deals only with strings - continues until encounters a newline character, **not including the newline**
	* you can customize getline’s delimiter, i.e., what character you want it to stop at. Default is the newline `\n`, but you can set it to anything
    * `getline(*ifs*, *string_var*, 'm')` - `'m'` is the delimiter, stores a string up until the character `m`
  
  * `cin` is a also a variable of type `ifstream`!
   `getline(cin, *string_variable*)` works too!
   * `cin` indicates that your input stream is coming from the keyboard
   * `ifstream` variables deal with different sources of input
   
# Lecture material
## Arrays in C++

* Arrays allow to store a list of things (variables, objects) of **the same type**
  * cannot mix different types of variables! (unlike python lists)
* practical for storing lists of information, as opposed to manually making declarations for every single variable in the list
* the array starts at 0, not at 1
  * double-check this when you work with arrays, otherwise, this could create errors, and potentially corrupt data
  * can use a number or an integer variable as an **index** of the array
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
  int size = 9; 
  int arr[size];  //ILLEGAL!
  //Part of it is because the compiler needs to know how much memory to allocate at compile time, 
  // but variables can change during runtime
  //if "size" is constant (const int size = 7;), you can get around this, because its value will not change during runtime.
  ```
* Examples for loops and arrays on the slides!
  * Use the index variable of loop to iterate through positions in the array

### More on memory
* memory is allocated for an array, but the compiler needs to know three things
  * 1) **address**: starting location /address of array
  * 2) **size**: how many elements
  * 3) **type**: what is the data type of the elements
* The elements in an array are adjacent in memory! This will be important when we talk about pointers and how traversing through an array works. Remember that memory allocated for the entire array cannot change during runtime.

> **What if I go out of bounds of an array?**
* Bad things may happen. You might corrupt your data, mess with other variables, or could potentially hit a segfault (i.e., segmentation fault) if you go out of bounds of memory allocated by the OS for your program.
   * If the size of your array is 10, the last element you should reach is `a[9]`. 
   * `a[10]` points to a memory location that is not within the array!
   * **the index** of the **last** element of the array is at `(size - 1)`.

### Arrays in functions
* The function header should be "informed" that it is taking in an array: to do so, add the brackets `[]`
  * ` int funct(int x[], int size); `
  * don't specify the size of an array in your function call -> square brackets is all the compiler needs to know to expect an array
* remember to include the size of an array as your other argument!
* _when passing an array to a function_, don't include the square brackets -> the compiler already knows it's an array
  * call to the function `funct()` from above will look like:
  ```cpp
  int arr[] = {2,3,5};
  funct(arr, 3); // no [] here!
  ```
* Can you calculate the size of an array inside a function? Kind of, but not with regular arrays (only with (`auto:`) that we haven't covered or with dynamic arrays)
  * You will learn about dynamic arrays after you learn about pointers

* **Functions cannot return arrays**! Only pointers to arrays.

## Makefiles & header files

* Flags in Makefiles
  * flags in Makefile commands change the default behavior. You already know `-o` (to rename the resulting object file) and `-std=c++11` (to compile using C++11 features). 
  * `-Wall` is another one to output all warnings the compiler finds.
* Makefile commands don't have to be g++ commands!
  * E.g., `clean` command shown below will remove all `.o` files created during compilation (i.e., all files that match the pattern with the wildcard in it) and the default executable (it will complain when the command is run, if they don't exist).
  ```
  clean:
	  rm a.out *.o 
  ```
  * As always, call this command by typing its name after a call to make: `make clean`
  * Make sure not to delete any important files! Files deleted with `rm` cannot be restored.
* Calling `make` without specifying targets will execute _the first command_ (which might cascade through the rest of your Makefile, depending on your listed dependencies)
* You can add `.o` files as dependencies for your targets. This way the `.o` files will be produced when the `make` command is executed. If there is no command correcponding to creating `.o` files, `make` will attempt to create them from the corresponding .cpp files for you!

### Header files
* header files: why do we need them? 
  * They contain function declarations (return type, name and variables, not actual instructions) that can be used in other programs.
  * header files help keep the programs modular and allow the code to be reusable.
  
* header files (`.h`) should always have a corresponding `.cpp` file with function definitions (actual code)
* EXAMPLE
  * let's say you have a file `arrayFunc.cpp` that has functions to calculate the minimum, maximum, and average of an array.
  * you will need to create a corresponding header file `arrayFunc.h` that will contain:
  ```cpp
  int maximum(int arr[], int size);
  int minimum(int arr[], int size);
  double average(int arr[], int size);
  ```
  * the code for those functions (i.e., function definitions) will be in the corresponding `arrayFunc.cpp`.
  
* If you want to use those functions in another program, say, main.cpp, you must let the compiler know where you're getting the functions from.
To do that, write `#include "arrayFunc.h"` at the top of **main.cpp**.
  * `#include <>` is used to search in the Standard Template Library
  * `#include ""` is used to search for the local files, i.e., the files that **you** created. 
  * Don't confuse the two ways listed above! Using the wrong directive will result in an error.

* Compile like this: 
  * `g++ main.cpp arrayFunc.cpp` or `g++ main.o arrayFunc.o` (the object files will be generated automatically _from the corresponding .cpp files_, which means that the .cpp files do not exist, the error will occur and the object files will not be created)
  * We did not include `arrayFunc.h` in the compilation command, because main.cpp includes it, and the linker takes care of linking the declarations from `arrayFunc.h` automatically.

## Notes
* You will pratice dealing with header files, Makefiles, and arrays in lab04
* Next time we will talk about pointers!
  


    


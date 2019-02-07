---
num: "lect08"
desc: "Intro to Makefiles and File I/O "
ready: false
pdfurl: /lectures/CS16_Lecture8.pdf
lecture_date: 2019-02-05
---

# Midterm FAQs:
* What is the average?
  * There are regrade requests still under review and points for a few questions have yet to be assigned, so we haven't calculated the true average score yet
* Will the midterm be curved?
  * To be decided when all the scores are finalized
* Where can I go for help?
  * Piazza is always available, as well as office hours and open labs. Please come talk to us if you aren't comfortable with a topic! The textbook and Google are also good resources, though be mindful not to copy code directly from the internet!

**A feedback form will be released soon! Let us know of any suggestions and concerns for the course.**

# Lecture Material:

## Makefiles: 
* An easier to unify compilation processes. Makefiles will become very important as you start separating your programs into different files, and you need to compile those files into a single executable file.
* Advantages: Makefiles are faster and convenient- they also only recompile the portions of your program that have been changed, so they make the compilation process more efficient.
* Compilation as you are familiar with it is actually 2 steps: 
  1. Compiling: Source code is translated into machine code
  2. Linking: External libraries (from `#include` statements) are incorporated into the program and, if your program consists of several files, the object files are combined into a single executable
* A makefile is essentially a place to hold all your compile commands for a particular project, so you can call those commands quickly
* Makefiles are created by simply creating a new file named *either* `makefile` or `Makefile`, with no extension (not .cpp or anything)
* Makefiles are *not* written in C++, so they have their own syntax!
* A makefile *must* be in the same directory as the files of the program you are compiling!
* EX: Comments are made by writing `#` at the start of a line, not `//`
* Commands are composed of three main parts: 
 1. **Target**: The file that will be output by a given command. This is usually the name of the executable you want to create.
 2. **Dependencies**: The files requird to create the desired output. For now, this is just your `.cpp` file. Eventually, you will start separating programs into headers and body files, and both will need to be listed as dependencies. Often, dependencies are object files, indicated by the `.o` extension. If those files don't exist for a given program, the makefile can often automatically generate them from the available `.cpp` files.
 3. **Definition**: The actual compile command- `g++ -std=c++ ....` This will generally be the command you would normally type into the terminal to compile a program, though it will become slightly different when you start separating programs.
### Makefile Syntax:
```
  target: dependencies
           definition
```
For example:
```
  main: main.cpp
         g++ -std=c++11 -o main main.cpp
```
         
**Note:** There is a *single tab space* at the start of the definition line. It must be a tab space, not 5 spaces in a row, or you will have a syntax error in your makefile!
* Once you have a make file, you can simply type `make [executable name]` to compile your program, rather than having to type out the compile command over and over.

* The three steps in the "life-cycle" of a program are:
 1. Code time: Write the actual commands for the CPU (in C++, or your chosen language)
 2. Compile time: Conversion into machine code
 3. Run time: The machine follows the instructions written during code-time
 

## File Input/Output:
* By now, you've worked with `cin`, `cout`, and command line arguments to get user input and print to the display
* You can also read from and write to files, using stream objects. 
  * Rather than having the user type in values, your programs can read text directly from given files.
  * Rather than printing a long output to the terminal display, you can store the output of a program in a file.
* In order to use input and output streams, you will need to add this line to your `include` statements: `#include <fstream>
  * This is because stream objects are available from the "filestream" library
* Declare stream objects like normal variables:
```
   ifstream ifs; //this creates an input stream object named ifs
   ofstream ofs; //an output stream object
                 //these variables can have any name, just like any other variable
```
* **Reading input files:**
 1. Create an input stream object: `ifstream inFile`
 2. Open the desired file with the ifstream. This "connects" the stream to this particular file: `inFile.open("MyFile.txt");`
   * Alternatively, if you have a string variable that holds the file name, you can use that variable:
```     
      string fileName = "MyFile.txt";
      inFile.open(fileName);
```
 3. When you are done reading from the file, *always* close your filestream!
   * `inStream.close()`
   * If you forget, sometimes your processor will handle it and close it for you, but don't count on this.
   * Leaving a filestream open leaves you at the risk of corrupting that file's data
* Other input filestream functions: 
   * `getline( inFile, nextLine)`: Gets the next line from the input file and stores it in the `string` variable `nextLine`. 
     * **Note:** The variable ` string nextLine` must have already been declared before using it with `getline`. It can have any name- `nextLine` is simply an example. 
     * `getline` always expects a string as the second parameter. If you want to take in variables besides strings, you will have to convert the inputs from a string into another format.
   * `.fail()`: Returns true if the previous filestream operation failed
      * For example, if the following two lines are executed and `isFail` is `true` afterwards, then the text file was not successfully opened:
        `inFile.open("MyFile.txt");`
        `bool isFail = inFile.fail();`
      * An ifstream object may fail to open a file if the file does not exist
   * `.good()`: Basically the opposit of `.fail()`. Returns `true` if the previous filestream operation was a success. 
   * `.eof()`: Checks if you are at the end of a file, returns `true` if you are.
   * How can you iterate through every line of a file?
    * Use a while loop!
```
     while(!inFile.eof()){
     //loops while not at end of file    
     }
 ```
 * **Note:** When you are reading from an input file, you can only go through the lines *forward*. If you want to go back and look at previous lines, you will have to close the stream, reopen it, and re-iterate to the line you want. There is no way of moving backwards while in the stream.

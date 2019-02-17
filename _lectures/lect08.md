---
num: "lect08"
desc: "Intro to Makefiles and File I/O "
ready: true
pdfurl: https://drive.google.com/drive/folders/1qG48RYFvB7VVEU7yP3eCkG8KRVA9KtYw?usp=sharing
reading: "Section 6.1: File I/O"
lecture_date: 2019-02-05
---

# Midterm FAQs:
* What is the average?
  * There are regrade requests still under review and points for a few questions have yet to be assigned, so we haven't calculated the true average score yet
* Will the midterm be curved?
  * To be decided when all the scores are finalized
* Where can I go for help?
  * Piazza is always available, as well as office hours and open labs. Please come talk to us if you aren't comfortable with a topic -- open lab hours are not just for questions about the labs -- you can ask about the course concepts! 
  * The textbook and Google are also good resources, though be mindful not to copy code directly from the internet!

**A feedback form will be released soon! Let us know of any suggestions and concerns for the course.**

# Lecture Material:

## Makefiles: 
* An easier way to unify compilation processes. Makefiles will become very important as you start separating your programs into different files, and you need to compile those files into a single executable file.
* Advantages: Makefiles are fast and convenient- they also only recompile the portions of your program that have been changed, so they make the compilation process more efficient.
* Compilation consists of 2 main steps: 
  1. Compiling: Source code is translated into machine code
  2. Linking: External libraries (from `#include` statements) are incorporated into the program and, if your program consists of several files, the object files are combined into a single executable

* A makefile is essentially a place to hold all your compile commands for a particular project, so you can call those commands quickly
* Makefiles are created by simply creating a new file named *either* `makefile` or `Makefile`, with no file extension (not .cpp, .txt or anything else)
* Makefiles are *not* written in C++, so they have their own syntax!
* A makefile *must* be in the same directory as the files of the program you are compiling!
* EX: Comments are made by writing `#` at the start of a line, not `//`

* Commands are composed of three main parts: 
 1. **Target**: The target that will be built by a given command (usually, the name of the file that will be output, e.g., the name of the executable you want to create).
 2. **Dependencies**: The files requird to create the desired output. For now, this is just your `.cpp` file. Eventually, you will start separating programs into headers and body files, and both will need to be listed as dependencies. Often, dependencies are object files, indicated by the `.o` extension. **If those files don't exist for a given program, the makefile can often automatically generate them from the available `.cpp` files.**
 3. **Command**: The command that will produce the required **target**, e.g., `g++ -std=c++ ....` 
    * This will generally be the command you would type into the terminal to compile a program, though it will become slightly different when you start separating programs. 
    * This does not have to be a `g++` command.

### Makefile Syntax:
```
  target: dependencies
           command
```
For example:
```
  main: main.cpp
         g++ -std=c++11 -o main main.cpp
```
         
**Note:** There is a *single tab space* at the start of the command line. It must be a tab, not 5 spaces in a row, otherwise, you will have the following error in your makefile: `Makefile:2: *** missing separator.  Stop.`!
* Once you have a makefile, you can simply type `make [target name]` to compile your program, rather than having to type out the compile command over and over.

**Update**: We posted an expanded *Makefile Walkthrough* on Piazza <https://piazza.com/class/jqm50idtsek4wz?cid=177>


* The three steps in the "life-cycle" of a program are:
 1. Code time: Write the actual commands for the CPU (in C++, or your chosen language)
 2. Compile time: Conversion into machine code
 3. Run time: The machine follows the instructions written during code-time
 

## File Input/Output:
* By now, you've worked with `cin`, `cout`, and command line arguments to get user input and print to the display
* You can also read from and write to files, using stream objects. 
  * Rather than having the user type in values, your programs can read text directly from given files.
  * Rather than printing a long output to the terminal display, you can store the output of a program in a file.
* In order to use input and output streams, you will need to add this line to your `include` statements: `#include <fstream>`
  * This is because stream objects are available from the "filestream" library `fstream`
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
   * If you forget, sometimes your processor will handle it and close it for you, but don't count on this, since it won't happen if the program exits with an error.
   * Leaving a filestream open leaves you at risk of corrupting that file's data
* Other input filestream functions: 
   * `getline(inFile, nextLine)`: Gets the next line from the input file and stores it in the `string` variable `nextLine`. 
     * **Note:** The variable `string nextLine` must have already been declared before using it with `getline`. It can have any name- `nextLine` is simply an example. 
     * `getline()` always expects a string as the second parameter. If you want to take in variables besides strings, you will have to convert the input from a string into another format.
 * **Note:** When you are reading from an input file, you can only go through the lines *forward*. If you want to go back and look at previous lines, you will have to close the stream, reopen it, and re-iterate to the line you want. There is no way of moving backwards while in the stream.

   * `.fail()`: Returns `true` if the previous filestream operation failed
      * For example, if the following two lines are executed and `isFail` is `true` afterwards, then the text file was not successfully opened:
```
        inFile.open("MyFile.txt");
        bool isFail = inFile.fail();
```
      * An ifstream object may fail to open a file if the file does not exist
   * `.good()`: Basically the opposite of `.fail()`. Returns `true` if the previous filestream operation was a success. 
   * `.eof()`: Checks if you are at the end of a file, returns `true` if you are.

> How can you iterate through every line of a file?
    * Use a while loop!
```
     while(!inFile.eof()){
     //loops while not at end of file    
     }
```

**Update**: A student posted a good example, which pointed at the fact that using `eof()` as part of the loop condition **is not a good idea**!
See the example below:
```cpp
// filestream.cpp
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream ins;
    string nextline;
    string filename = "animals03.txt";

    ins.open(filename);
    if (ins.fail())
    {
        cerr << "Unable to open the file " << filename << endl;
        return -1;
    }

    while (!ins.eof()) {
        ins >> nextline;
        cout << nextline << endl;
    }
    ins.close();

    return 0;
}
```

Contents of `animals03.txt` shown via the `cat` command:
```
$ cat animals03.txt
duck
duck
goose
```

Compiling and running the program on the provided file, results in the last line being output twice:
```
$ g++ filestream.cpp -o filestream
$ ./filestream
duck
duck
goose
goose
```

See further discussion about it in this post <https://stackoverflow.com/questions/21647/reading-from-text-file-until-eof-repeats-last-line>.

---
num: "lect07"
desc: "Midterm preparation and overview / More functions and debugging"
ready: true
pdfurl: ""
lecture_date: 2019-01-29 
---
The midterm is this Thursday, January 31st! It will take place **during the lecture time you are enrolled in** and will cover everything up through this lecture. You are allowed one sheet of notes, written or typed. **Please show up 5 to 10 minutes early! The exam will start at exactly 3:30 or 6:30 sharp!**

See the lecture slides for the list of topics on the exam, as well as the practice problems and solutions presented during lecture. 

### Here are some problems to expect:
**Note that this list is not comprehensive, and you should be comfortable with any material discussed in lectures, homeworks, and labs.**
---
Code Tracing
---
	* Given a piece of code, determine its behavior or output
Code Completion
---
	* Given a few lines of a program and its output, fill in the missing lines
Bug Hunting:
---
	* Given a piece of code, find all the errors. We will tell you how many errors to look for.
	* Make sure to check edge cases and precedence or operations in loops and boolean statements
		* Edge cases = the extreme cases, such as the first and last numbers used in a loop
Block Placement:
---
	* What is the proper order to place "blocks" of code in?
	* Notes on functions:
		* The declaration is function’s return value, name and parameters. The definition is its implementation (code). A declaration must appear before the function is ever called in the program, but the definition can appear anywhere. If you want to "combine" the declaration and definition, you can place the entire definition before the function is called anywhere in the code (you will no longer need a declaration)
			* The declaration and definition of a function share the same header, but the declaration is always followed by a semicolon.
    		* Important to decide whether it should return or print the result
    		* Decide whether the function will take arguments or not
			* If it does, place a list of the expected arguments in the parentheses that follow the function header
			* EX: `int count( int one, int two, int three)`
				* This is a function that takes three integer *arguments* and *returns* one integer value
    		* Remember to use a semicolon after a list of function’s arguments when writing the function *declaration*
   		* Functions can only access data inside its scope. If a variable uses some variable declared in another place, pass it as a parameter.

Command-Line Arguments:
---
	* Be able to convert a program that does not take command-line arguments into one that requires command-line arguments. Know how to use `argc` and `argv` in your program.

Converting the example from the slides to accept the user input from the command line.
*Note that the program will crash if no additional command-line arguments (other than the name of the executable) are provided!*

```c++
// mult_cl.cpp
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int sum = 0;
    int n = -1;

    n = atoi(argv[1]);

    for(int i = 1; i < n; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }
    cout << "The sum is " << sum << endl;
    return 0;
}
```

### Miscellaneous
---
How are booleans output? What if the value that takes the place of a boolean is not 1 or 0?
    * First, the expression is converted into a boolean. Everything that is not 0 is converted to a 1 (true), and 0 stays a 0 (zero). Boolean values are output as 1 (true) or 0 (false).

Know your basic vim commands (mode switching, etc)

Be familiar with information from the reading- just because it wasn’t on the homework doesn’t mean it’s not important to being a good programmer.

Different types of errors, and how to identify them:
	* Compile-time: When a program fails to compile.
		* Syntax errors are a commong example of this- if you are missing a semicolon or a bracket {}, or have a misspelling somewhere that the compiler cannot understand, then the compilation will fail and no executable will be created.
	* Run-time errors: Using invalid operations in code
		* The compiler doesn't check if you are using valid data or operations when it creates the executable. Run time errors occur when your program crashes after trying to execute an invalid operation (dividing by 0, for example).	
	* Logic errors: Not the expected output
		* These errors are the trickiest to find, because the program compiles and runs normally but doesn't behave as it was intended to. Common logic errors are: Dividing by the wrong number (programming in the wrong math), being off by one in your loop indices (too high or too low), and mistakes in boolean logic (if-else statements, while-loop tests, etc)

C++ doesn’t care about spacing/tabs/newlines, etc

Functions are the most important section!
    - Don’t spend a disproportionate amount of time on the basics- be sure to review complex concepts
    - Be comfortable with programming concepts in the most recent lab and lecture (this Tuesday and Wednesday)

Converting the example from the slides to use a function and provide a more elaborate output.

```c++
// mult_funct_n.cpp
#include <iostream>
using namespace std;

int compute_sum(int limit)
{
    int sum = 0;

	for(int i = 1; i < limit; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}

    return sum;
}

int main()
{
   int n = -1;
	cout << "Enter n: ";
	cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout <<"i = " << i << " The sum is " << compute_sum(i) << endl;
    }
	return 0;
}
```



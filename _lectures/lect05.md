---
num: "lect05"
desc: "Functions, print vs. return, Memory Stack"
ready: false
pdfurl: ""
lecture_date: 2019-01-22
---


# Review - Control Structures: Loops

## While Loops

General syntax of a while loop:

```
while (BOOLEAN_EXPRESSION) {
	// code
	// ...
}
```

1. Check if the BOOLEAN_EXPRESSION is true.
	* If true, the statements in loop will execute.
		* at the end of the loop, go back to `while`.
	* If false, the statements in the loop will not execute.
		* the program execution after the loop continues.

## Example

```
int i = 0;
while (i < 10)
{
	cout << "i = " << i << endl;
	// add i++ afterwards to eliminate an infinite loop.
	// i++ → i = i + 1;
	// Remember to enclose this statement with { }
}
```


## Do-while Loops

* Useful if you want to execute a block of code _at least once_.
* General syntax of a do-while loop:

```
do {
	// code
	// ...
} while (BOOLEAN_EXPRESSION);
```

* Note the ';' at the end of the loop. This syntax is required.

1. Execute the code in the loop
2. Check if BOOLEAN_EXPRESSION is true.
	* If true, then go back to `do`.
	* If false, then exit the loop and resume program execution.

## Example

```
int i = 0;
do {
	cout << "i = " << i << endl;
	i++;
} while (i < 0);
```

* Outputs "i = 0" once regardless of what the BOOLEAN_EXPRESSION evaluates to.
* Change to `while (i < 10)` to print "i = [0 - 9]".

## For Loop

General syntax of a for loop:

```
for (INITIALIZATION; BOOLEAN_EXPRESSION; UPDATE) {
	// code
	// ...
}
```

1. Execute the INITIALIZATION statement.
2. Check if BOOLEAN_EXPRESSION is true.
	* if true, execute code in the loop block.
		* execute UPDATE statement.
		* Go back to the BOOLEAN_EXPRESSION.
	* if false, do not execute code in the loop.
		* exit the loop and resume program execution.

## Example

```
for (int i = 0; i < 10; i++) {
	cout << “i = “ << i << endl;
}
```

## Nested Loops

Other loops within a loop can be defined.

## Example

```
for (int i = 0; i < 5; i++) {
	cout << “—“ << endl;
	cout << “i = “ << i << endl;
	for (int j = 0; j < 5; j++) {
		cout << “j = “ << j << endl;
	}
}
```

## Continue and break statements

* `continue;` can be used to stop the current iteration of a loop, perform the UPDATE statement if necessary, re-check the BOOLEAN_EXPRESSION, and continue with the next iteration of the loop.
* `break;` can be used to break out of the <i>current</i> loop and continue execution after the end of the loop.

## Example

```
for (int i = 0; i < 10; i++) {
	if (i == 4)
		continue;
	if (i == 7)
		break;
	cout << “i = “ << i << endl;
}
```


# Precedence Rules

Highest precedence (done first)
```
    The unary operators +, -, ++, --, and !
    The binary arithmetic *, /, %
    The binary arithmetic +, -
    The Boolean operations <, >, <=, >=
    The Boolean operations ==, !=
    The Boolean operations &&
    The Boolean operations ||
```
Lowest precedence (done last)

C++ first evaluates the leftmost of the two expressions joined by an `&&` or an `||`.
If that gives enough information to determine the final value of the expression (independent of the value of the second expression), then C++ does not bother to evaluate the second expression. This is called **short-circuit evaluation**. (Savitch, p.114-115)


# Formatting output to the terminal

* Several ways to do this inside the `main()` program.
* We can customize the `cout` function to display floating point numbers as follows:

```
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2); // prints two decimal spaces for floating point values.
```	

# Example: A number guessing game

```
#include <iostream>

using namespace std;

const int ANSWER = 42; // const values cannot be modified

int main(int argc, char *argv[]) {

	int input = 0;

	do {
        cout << "Enter a negative number to stop playing." << endl;
		cout << "Guess a number between [0 - 100]: ";
		cin >> input;
		if (input == -1) { // sentinel value
			break;
        }
		if (input < ANSWER) {
			cout << "Too small" << endl;
			continue;
		}
		if (input > ANSWER) {
			cout << "Too big" << endl;
			continue;
		}
		if (input == ANSWER) {
			cout << "WINNER! ANSWER = " << ANSWER << endl;
			break;
		}
	} while (true);

	cout << "Thanks for playing!" << endl;
}
```

Note that the value `-1` above is used as a **sentinel value**: one that is distinct from the possible input values being read in and so can be used as a signal to indicate the end of the list. (See Savitch, p. 158)


# User Input

## Example of using command line arguments

* We can pass information into a C++ program through the command line when executing the program.
* Note: You may have to convert command line argument information into the proper type (i.e. convert it to an integer type) if necessary.
* The main function will need to have the following:

```
int main(int argc, char *argv[]) {
```

* `int argc` is the number of "arguments" the program has, including the executable name.
* `char* argv[]` is the "list" of arguments passed into the program.
	* Don't worry if the syntax doesn't make too much sense for now, we'll cover this later in the quarter.

```c++
// cline.cpp
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

	cout << "Number of arguments: " << argc << endl;

	cout << argv[0] << endl;
	cout << argv[1] << endl;
	cout << argv[2] << endl;

	// how to use these arguments as numbers?
	// We can convert them using the atoi function
	// in the cstdlib standard library

	int x = atoi(argv[1]) + atoi(argv[2]);
	cout << x << endl;
	return 0;
}
```

As you can see, the program expects three input arguments to the program:
```
    ./cline 1 2 3
```

If you don't provide the correct number of arguments, you will get a segmentation fault, since the computer will be accessing the uninitialized parts of the memory.
It is always best to check that the provided number of arguments matches what the program expects.
Here's the updated version of the above code:

```c++
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    int num_args = 4;

	cout << "Number of arguments: " << argc << endl;
	if (argc == num_args)
	{
		cout << argv[0] << endl;
		cout << argv[1] << endl;
		cout << argv[2] << endl;
		// how to use these arguments as numbers?
		// We can convert them using the atoi function
		// in the cstdlib standard library

		int x = atoi(argv[1]) + atoi(argv[2]);
		cout << x << endl;
	}
	else
	{
		cout << "You need to provide 3 arguments after the name of the program.\n";
	}
	return 0;
}
```

# Functions

* A function is a block of code that takes parameters, executes some statements, and sometimes returns a value.

* When developing software, defining functions is a way to "modularize" your code into maintainable parts.
	* Supports the DRY (Don’t Repeat Yourself) principle.
	* Better maintenance
		* If a bug exists in a function, change it once and it should fix it for everything that uses it.
	* General rule of thumb: if you find yourself writing the same code in different parts of the program, see if you can refactor that code into a function.


## Function Declarations

In C++, a function declaration must occur BEFORE they are used.
	* We can write the method after it is used, we just need to declare it.

## Example: Simple Function Definition

```
#include <iostream>

using namespace std;

int areaOfSquare(int length); // declaration

int main() {
	int result = areaOfSquare(20); // call
	cout << result << endl;
	return 0;
}

int areaOfSquare(int length) { // definition
	return length * length;
}
// OK. Function declaration happens before it was used

-----------
#include <iostream>

using namespace std;

int main() {
	int result = areaOfSquare(20); // call
	cout << result << endl;
	return 0;
}

int areaOfSquare(int length) { // definition
	return length * length;
}
// ERROR! use of undeclared identifier 'areaOfSquare'

```

## Return vs. Print

* Not all functions need to return a value. Some cases may be
	* Printing something to a console
	* Simply changing a state of a variable or data structure.

## Example of printing, but not returning

```
void printAreaOfSquare(int area) {
	cout << “Area of Square: “ << area << endl;
	return; // return not necessary, will exit function when reached.
}
```


# Memory Stack

* Types are important in compiled languages like C++
	* Knowing exactly the amount of memory a function will occupy is essential for memory organization during execution.
	* Function calls are laid out in memory as a data structure called a <b>stack</b>.
		* Think of a stack like a canister of tennis balls.
		* You can only add to the top of the stack.
		* You can only remove an item at the top of the stack.
	* Every time a function is called, memory footprint is created and added to the top of the memory stack.
	* When the function returns a value, the memory that was reserved for the function is removed from the stack.
	* `int main()` is the bottom most function on the stack throughout execution.

## Example

```
#include <iostream>

using namespace std;

int doubleValue(int x) {
	return 2 * x;
}

int quadrupleValue(int x) {
	return double(x) + double(x);
}

int main() {
	int result = quadrupleValue(4);
	cout << result << endl;
	return 0;
}
```

* Start Execution

```
|                       |
|-----------------------|
| int main()            |
|_______________________|
```

* `quadrupleValue(4)` is called

```
|                       |
|-----------------------|
| int quadrupleValue(4) |
|-----------------------|
| int main()            |
|_______________________|
```

* `double(x)` is called

```
|                       |
|-----------------------|
| int double(4)         |
|-----------------------|
| int quadrupleValue(4) |
|-----------------------|
| int main()            |
|_______________________|
```

* `double(4)` finishes executing and returns a value

```
|                       |
|-----------------------|
| int quadrupleValue(4) |
|-----------------------|
| int main()            |
|_______________________|
```

* `double(4)` is called again

```
|                       |
|-----------------------|
| int double(4)         |
|-----------------------|
| int quadrupleValue(4) |
|-----------------------|
| int main()            |
|_______________________|
```

* `double(4)` finishes executing and returns a value

```
|                       |
|-----------------------|
| int quadrupleValue(4) |
|-----------------------|
| int main()            |
|_______________________|
```

* `quadrupleValue` returns the sum of the two `double(4)` function calls

```
|                       |
|-----------------------|
| int main()            |
|_______________________|
```

* `main` prints the result of `quadrupleValue` return value. Program exits.






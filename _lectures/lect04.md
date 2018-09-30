---
num: "Lecture 4"
desc: "Repetition with loops"
ready: false
annotatedpdfurl: /lectures/CS16_Lecture4_ann.pdf
annotatedready: false
date: 2018-10-09 12:30:00.00-7:00
---


# Control Structures: Loops

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
		* at the end of the loop, go back to 1.
	* If false, the statements in the loop will not execute.
		* the program execution after the loop continues.

## Example

```
int i = 0;
while (i < 10)
	cout << "i = " << i << endl;
	// add i++ afterwards to eliminate an infinite loop.
	// i++ → i = i + 1;
	// Remember to enclose this statement with { }
```

* Note that a single statement after a while loop (similar to an if statement) is considered part of the loop without the { }.
	* If more than one statement is part of the loop, this must be contained within the { }

## Do-while Loops

* Useful if you want to execute a block of code at least once.
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
	* If true, then go back to 1.
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
	* if true, execute code in the loop.
		* execute UPDATE statement.
		* Go back to 2.
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

# Formatting output to the terminal

* Several ways to do this.
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
		cout << "Guess a number between [0 - 100]: ";
		cin >> input;
		if (input == -1)
			break;
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

**Math Puzzle**
One of the powers of computing is being able to do a brute-force search for a solution to a problem. Trial and error works just fine for some problems. In fact, computers can be especially good at such problems. Consider this:

Horses cost $10, pigs cost $3, and rabbits are only $0.50. A farmer buys 100 animals for $100, How many of each animal did he buy?  

Write a program to do this.

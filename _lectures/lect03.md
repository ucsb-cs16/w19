---
num: "lect03"
desc:  "Variables and types, expressions, control structures (if-else), input/output "
ready: true
pdfurl: /lectures/CS16_Lecture3.pdf
lecture_date: 2018-10-04
---


# Code from lecture
[https://github.com/ucsb-cs16-f18-mirza/cs16-f18-lectures/tree/master/lec-03](https://github.com/ucsb-cs16-f18-mirza/cs16-f18-lectures/tree/master/lec-03)


# Topics
# Boolean Expressions
* An expression that evaluates to either true or false.
* You can build boolean expressions with relational operators comparing values:

```
==  // true if two values are equivalent
!=  // true if two values are not equivalent
< // true if left value is less than the right value
<=  // true if left value is less than OR EQUAL to the right value
> // true if left value is greater than the right value
>=  // true if left value is greater than OR EQUAL to the right value
```

* Integer values can be used as boolean values
  * C++ will treat the number 0 as false and any non-zero number as true.

```
bool x = 5 == 1;  // x = 0
bool x = 3 != 2;  // x = 1
```

  * Combine boolean expressions using Logical Operators

```
!   // inverts true to false or false to true
&&  // boolean AND
||  // boolean OR
```
  
  * Example

```
bool x = true;
bool y = true;
x = !x;     // x = false
x = x && y    // x = false
x = x || y    // x = true
```

# Control Structures

* Boolean expressions are fundamental pieces that provide control flow within your program.

## If-else statements

* Ability to execute two alternative blocks of C++ statements based on the value of a boolean expression.

```
if (BOOLEAN_EXPRESSION) {
  // code1
} else {
  // code2
}
```

* If the BOOLEAN_EXPRESSION evaluates to true, then code1 is executed. Otherwise code2 is executed.
* Example

```
int x = 4;
if ((x > 3) && (x < 6)) {
  cout << “x is either 4 or 5” << endl;
} else {
  cout << “x is not 4 or 5” << endl;
}
```

* Notice the “{ … }” . Also known as block statements. 
  * This allows many statements to be executed.
  * Without “{ … }”, only the following statement will be executed, and other statements are considered outside the block statement.
  * Example

```
int x = 4;
if ((x > 3) && (x < 6))
  cout << “x is either 4 or 5” << endl;
else
  cout << “x is not 4 or 5” << endl;
// Will have the same output as the last statement.

int x = 6;
if ((x > 3) && (x < 6))
  cout << “1” << endl;
  cout << “2” << endl; // outside if block
  cout << “3” << endl; // outside if block
```
  
  * The last two statements will always execute because it’s considered outside of the code block.
  * A syntax error will appear if you try to insert an “else” after the statements since “else” can only be used after an if code block.

# Multi-way If-else Statements

* Programs may require more than simply two paths of code execution.
* Multiple if-else statements can allow the program to execute many branches.
* Example

```
int x = 3;
if (x == 1)
  cout << “x equals 1” << endl;
else if (x == 2)
  cout << “x equals 2” << endl;
else if (x == 3)
  cout << “x equals 3” << endl;
else
  cout << “x does not equal 1, 2, or 3” << endl;
```


# User Input

## Example of interacting with the console using the cin function

```
#include <iostream>
#include <string>

using namespace std;

int main() {  
// Example receiving a string from the user
  string name;
  cout << "What is your name? ";
  cin >> name;
  cout << "Hello " << name << endl;

  // Example receiving a number from the user
  int i;
  cout << "Enter a number: ";
  cin >> i;
  cout << "The number entered is " << i << endl;

  cout << i / 2 << endl; // what value / type is this if i == 11? 
}
```

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

```
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

# In class demo: Fizzbuzz!

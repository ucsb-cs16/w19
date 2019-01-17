---
num: "lect03"
desc:  "Variables and types, expressions, control structures (if-else), input/output "
ready: false
lecture_date: 2019-01-15
---

# C++ Variables and Types

* Variables are used to store data.
  * Each variable must have a type associated with it.
    * Not the case in Python where a variable can be anything
    * Depending on the type, a variable occupies a different amount of bytes on disk
    * A variable's type also helps the compiler check that you are using the variable in an acceptable way (e.g., assigning a valid value)
  * Variable names must
    * Start with an alphabetical character or underscore (the latter is not recommended, since it's reserved for special cases, such as special library variables)
    * Other characters can be alphanumeric and underscore characters, but no spaces or other special characters.
  * C++ is *case-sensitive*. `x` and `X` are considered to be different variables.
    * I recommend _not_ using the camel-case notation that the book is using, and instead adopt a C-style naming convention that uses underscores.

* Some common types:
  * `int`: Integers
  * `double`: Floating point
  * `char`: characters (a single letter or symbol; values are always inside the single quotes, e.g., 'a' or '?')
  * `string`: sequence (array) of characters (strings are always inside the double quotes, e.g., "Hello!")
  * `bool`: boolean

* Good practice to initialize your variables
  * Uninitialized variables may have strange side-effects, e.g., running the same code with the same input but getting different answers.


# Initializing, Assigning, and Modifying Variables

* Example

```
int x;      // declare variable x of type int
int y, z;   // declare variables x and y in one statement
x = 10;     // assign x to an integer value 10.

int a = 10;   // declare and initialize (i.e., assign its initial value) in one statement
int b = 20, c = 30;

b = 6 + 4;

cout << a << "," << b << "," << c << "," <<
x << "," << y << "," << z << endl;
```

# Boolean Expressions
* An expression that evaluates to either `true` or `false`.
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
  * C++ will treat the number 0 as false and *any* non-zero number as true.

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
} 
else {
  // code2
}
```

* If the BOOLEAN_EXPRESSION evaluates to true, then code1 is executed. Otherwise code2 is executed.
* Example

```
int x = 4;
if ((x > 3) && (x < 6)) {
  cout << “x is either 4 or 5” << endl;
} 
else {
  cout << “x is not 4 or 5” << endl;
}
```

* Notice the curly braces, i.e. “{ ... }”, also known as block statements. 
  * This allows many statements to be executed.
  * Without “{ ... }”, only the following statement will be considered as part of that condition's block, and other statements are considered outside the block statement.
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
  
  * The last two statements will always execute because they are considered outside of the code block.
  * A syntax error will appear if you try to insert an `else` after the statements since `else` can only be used after an `if` code block.
  * Note that the syntax is NOT `elif`, like it is in Python; you need to write out `else if() {...}`

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

# Vim navigation trick

Make sure that you are in the "Command mode" for Vim.

Pressing Ctrl key followed by z will put the Vim window in the background, giving you back the command-line prompt.

Type `fg` and press Enter, to get back into Vim.


# Shortcut of the day

`ll` can be the same as `ls -l`, if you type `alias ll='ls -l'` on the command line (it will be remembered until you close that session).

Personally, I use `alias ll='ls -lFG'`.



# Files created during lecture

## 3:30 lecture

**undef.cpp**

```
#include <iostream>

using namespace std;

int main() {
    int a = 42;
    int b = -42;
    double c = 3.14;
    char d = 'K';
    //cout << "The sum of a and b is " << a+b << endl;
    cout << "The sum of a = " << a << " and b = " << b;
    cout << "  is " << a+b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    if ((a == 42) && (d == 'k')) {
        cout << "It is " << a << d << endl;
    }
    else {
        if (d == 'K')
        {
            cout << "Prof. K?" << endl;
        }
        else {
        cout << "It is  NOT 42 :(" <<  endl;
        }
    }

    return 0;
}
```


## 6:30 lecture

**myfile.cpp**

```

#include<iostream>

using namespace std;

int main() {
    int a = 42;
    int b = -42;
    double d = 3.14159;
    char c = 'N';
    //cout << "The sum of a and b is " << a+b << endl;
    cout << "The sum of a=" << a << " and b=" << b << " is ";
    cout << a+b ;
    cout << endl;
    cout << "Char c = " << c << endl;
    cout << "D is = " << d << endl;

    if (c == 'Y') {
        cout << "Hello, hitchiker!" << endl;
    }
    else if ((c == 'K') & (a == "K"))
    {
        cout << "Prof. K, welcome!" << endl;
    }
    else
    {
        cout << " Who are you?" << endl;
    }
    return 0;
}
```

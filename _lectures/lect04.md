---
num: "lect04"
desc: "User Input; Repetition with loops"
ready: true
pdfurl: "https://drive.google.com/drive/folders/1qG48RYFvB7VVEU7yP3eCkG8KRVA9KtYw?usp=sharing"
lecture_date: 2019-01-17
---

# User Input; Repetition with loops


## User Input and Output

* **`<<`** is an insertion operator used with the _output stream_ and always goes together with the `cout`
* separates expressions of the _same type_.

You can ‘cascade' the insertion operators, rather than using another `cout` command when printing

```c++
	cout<< "Hello, my name is ";
	cout<< name << endl;
```

Can be written as

```c++
	cout<< "Hello, my name is "<< name << endl;
```


To collect user input, the _input stream_ uses **`>>`**, _the extraction operator_.
The extraction operator **`>>`** is used with **`cin`** to store user input:

```c++
int num = -99;
cout << "Select a number between 0 and 100 (inclusive): ";
cin >> num;
cout << "You selected " << num << endl;
```

* In the above code, create a variable to hold the input (`int num`).
* Take input from terminal, store in that variable (`cin >> num`). No input is collected until you press ENTER.

Once the input is taken, can't directly see what is stored in the variable.
Good practice is to print it out to display and check.

Make sure that input is being stored in a variable of appropriate type.
No strings stored in integer vars, etc.
Sometimes inputs can be stored as different types, but might not behave as expected.
A number can be stored as a string, but you wouldn't be able to do math with that number as you would with an int (it will behave as a string).

Use `if else` statements to check for conditions of input variables to produce different outputs based on the values entered by the user.


### Newline (a "carriage return" character)

The placement of `endl` controls where the new line appears on the screen - If `endl` is included before the output (e.g., before `num`), then the text will appear on the next line. If `endl` is included after the output, the text will appear on the same line and whatever comes after, will be on the next line.

_Read the discussion in the book about the style choice of using `\n` vs. `endl` to add a **carriage return**._
`\n` (which is a _single_ character) is the same as `endl`.
Savitch's recommendation: use `\n` when the last thing printed was a string, `endl` when last thing was a variable (in general).


## Coding Process

Edit, Compile, Run until program produces the correct behavior.

**Compilation**

Executable file name defaults to `a.out`, if no name is specified, the compiler doesn't know where to store the output.
Compiling a different file with no executable name will overwrite an existing `a.out`.

When compiling a file for the first time
* If the compiler encounters an error, no executable code is generated
* If you fix mistake and recompile, an executable will be produced

Compiling the same file further in development
* If a compiler encounters an error at this stage, the previous executable will still exist but **will not** be updated- will not reflect changes made to the .cpp file.
* Compilation must include the `-o` flag in the `g++` command to indicate that the executable should be stored in a file with the chosen name.


*PRO TIP*: If a program is stuck in an infinite loop, `CTRL+C` breaks the execution.

*PRO TIP* (Good debugging technique): ERRORS: Don't look at the bottom of the list of errors, look at the top for the very first error - addressing that error might fix all others.


## Initialization vs. declaration

Know your terminology and use it correctly!

Without initialization, it's just a **declaration** of a new variable, e.g., `int i`;

When you declare without initializing, you create a space in memory for the value, but you don't assign anything to that space.
This often means that an unintialized variable holds garbage values until it is assigned, so it can be dangerous to perform operations until it is initialized.
For example, `string str`; //by default the string class sets it to an empty string, but depending on the compiles, it may not.

When you declare a variable and immediately assign it an _initial_ value, then you have _initialized_ it.

```c++
	int age = -99;
```
or

```c++
	int age;
	age = -99;
```

*PRO TIP*: Initializing a variable to a dummy value outside the normal range might make it easier to debug later.

*PRO TIP* / Personal preference: declare all variables at the top of the file to see clearly which ones are `int` or `string`, etc., even if they are used later on.


## Unix command in action

`rm _filename_` removes a file. 

E.g., "`rm a.out`". If a Vim session was closed while editing a file, next time you open that file, you might get an error. One way to address the error is to remove its `.swp` file (e.g., for a file called `for.cpp`, you'd run "`rm .for.cpp.swp`" (note: you might lose your changes)).


## Using strings

`#include <string>` to use string objects.
* In Mac OS, `iostream` has `string` library built in, but lab machines may throw an ‘undefined object' error.
* Include `<string>` for portability and convention - every compiler will know how to properly compile the code.
* MUST use double quotes for a string (`" "`), and single quotes for a char (`' '`) in C++
* char to string conversion issue: cannot initialize a string with a character


## `while` loop

A while loop is used to repeat code while some condition is true.
```c++
	while(BOOLEAN_EXPRESSION) {
		// Code to run when the BOOLEAN_EXPRESSION is true.
	}
```

Check if the BOOLEAN_EXPRESSION is true.
* If true, the statements inside the loop's block will execute.
* at the end of the loop block, go back to `while`.
* If false, the statements in the loop will not execute.
* the program execution after the loop continues.

Example usage: say we want users to enter a non-negative number.
Use a while loop, so that users must keep entering values until the boolean statement is satisfied
```c++
    while(num < 0) {
    	//keep asking user, taking in input
    }
```

The boolean statement is checked first, and the body is skipped if the requirements are met.
Once the bool statement (`num < 0`) is no longer true, i.e., the user provided a non-negative number, the loop will stop.


The `while` loop has two flavors: a usual `while` that we looked at above, and `do-while` loop, which is used when the body of the loop needs to be executed **at least once**.

## `do-while` loops

A `while` loop is used to repeat code until some condition is no longer true

```c++
	do {
		// Code
		// This code is executed once
		// and is executed again if the BOOLEAN_EXPRESSION below is true
	} while(BOOLEAN_EXPRESSION);
```

1. Execute the code in the loop
2. Check if BOOLEAN_EXPRESSION is true.
* If true, then go back to 1.
* If false, then exit the loop and resume program execution.

Note: You must have a semicolon (`;`) after the `while` statement, if you are using a `do-while` loop (no semicolon if it is just a `while`).

In all loops, remember to **update the variable controlling the loop each time** (examined in bool test), otherwise an infinite loop will occur.
After any while loop, we know that the variable being examined meets a particular condition (e.g., `num >= 0`), otherwise, we would not have exited the loop.


## `for` loops

The `while` and `for` loops can be interchanged, but some formats are more convenient than others in different situations.

The `for` loop is used to repeat code (usually a fixed number of times).

```c++
	for (INITIALIZATION; BOOLEAN_EXPRESSION; UPDATE) {
		// Code to run when the BOOLEAN_EXPRESSION is true.
	}
```

1. Execute the INITIALIZATION statement.
2. Check if the BOOLEAN_EXPRESSION is true.
* if true, execute code in the loop.
* THEN execute UPDATE statement.
* Go back to the BOOLEAN_EXPRESSION.
* if false, do not execute code in the loop.
* exit the loop and resume program execution.



### Skipping and Terminating Loop Execution

`continue`
* Once a `continue` line is reached, go back to the top of the loop immediately

`break`
* Once a `break` line is reached, the program will _exit_ (break out of) the loop immediately

In both cases, the program ignores anything else in the block that comes after continue/break,
i.e., the rest of that block below the `continue`/`break` line is **not** executed



## Code from lecture


### 3:30 Lecture


```c++
// user_input.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age = -999;
    cout << "What is your name? \n";
    cin >> name;
    cout << "Hello, " << name << endl;
    cout << "What is your age? \n";
    cin >> age;
    if (age <= 0)
    {
        cout << "You are not real!" << endl;
        cout << "What is your age? \n";
        cin >> age;
        cout << "You entered " << age << endl;
        while (age <= 0) {
            cout << "What is your age? \n";
            cin >> age;
            cout << "You entered " << age << endl;
        }
    }
    else {
        cout << "Me too! I'm " << age << endl;
    }
    return 0;
}
```

```c++
// user_input_do.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name ="Blah
    int age = -999;
    cout << "What is your name? \n";
    cin >> name;
    cout << "Hello, " << name << endl;
    do {
        cout << "What is your age? \n";
        cin >> age;
        cout << "You entered " << age << endl;
    }
    while (age <= 0);

    return 0;
}
```

```c++
// for.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0;
    int limit = -1;

    do {
    cout << "How many times to run the loop? ";
    cin >> limit;
    } while (limit <= 0);

    for (i = 0; i < limit; i++)
    {
        if (i== 4)
        {
            continue;
        }
        if (i==7)
        {
            break;
        }
        cout << "i = " << i << endl;
    }
    return 0;
}
```

### 6:30 Lecture

```c++
// input.cpp

#include <iostream>
using namespace std;

int main() {
    int x = 16;
    cout << "Hello!" << endl;
    cout << "Hello! \n" ;

    cout << "Welcome to CS" << x << endl;

    cout << "Welcome to CS" ;
    cout << x << endl;

    return 0;
}
```

```c++
// copy.cpp

#include <iostream>
#include <string>

using namespace std;

int main() {
    string color;
    double debt = -1;
    /*

    cout << "What is your favorite color? \n";
    cin >> color;
    //cout << "Mine too! I love " << color << endl;
    cout << "Mine too! I love " << color << "!\n";
    cout << "Mine too! I love " << color << "!" << endl;
*/
    do {
        cout << "What is your student debt? ";
        cin >> debt;
    }
    while (debt < 0);

    if (debt == 0) {
        cout << "No way!" << endl;
    }
    else
    {
        /*
        while (debt < 0)
        {
            cout << "Are you sure? ";
            cout << "What is your student debt? ";
            cin >> debt;
        }
        */

        cout << "I'll cry with you and it won't cost you $" <<  debt << endl;
    }

    return 0;
}
```

```c++
// for.cpp

#include <iostream>
#include <string>

using namespace std;

int main() {
    int i = 0;
    int limit = -1;

    cout << "How many times to run the loop? \n";
    cin >> limit;

    for (i = 0; i < limit; i++)
    {
        if (i == 4) {
            continue;
        }
        if (i == 7) {
            break;
        }
        cout << "i = " << i << endl;
    }

    i = 0;
    while (i < limit)
    {
        if (i != 4) {
            cout << "i = " << i << endl;
        }
        /* will print 7, if left in here */
        if (i == 7) {
            break;
        }
        i++;
    }

    return 0;
}
```



### Practice

Take a look at the slide "Nested for loops – ASCII art!" and test if you can write the code on your own.


---
num: "lect03"
desc:  "Variables and types, expressions, control structures (if-else), output "
ready: true
pdfurl: "https://drive.google.com/file/d/1WwaBW7bOaDlY3qnJxGIu5A-yK4f818V7/view?usp=sharing"
lecture_date: 2019-01-15
---

Used no slides for this lecture; mostly live coding.

## Announcements

### Exams
Exam dates have been posted on the calendar, your next midterm is in class on January 31st.

**Midterm 1: January 31st; Midterm 2: February 28th; Final: March 21st**

Verify that you have no conflict with the exams **by the end of the week** (otherwise, no possibility for makeup will be provided).

### Midterm Preparation
As the first midterm draws near, make sure to take advantage of all resources available to you!
 * **Homework**: Going over homework will help you remember crucial information that may have been glossed over the first time.
 * **Labs**:  Labs are comprehensive, read everything, don’t just skip over information when completing the lab :(
    * Lab 01 will be released soon!
    * Labs 02 onwards will involve partner work
 * **Textbook**: Provides several practice problems and explanations of C++ concepts.
 * **Lecture**: Most important concepts will be covered here; be sure to attend regularly, review quizzes, in-class code, and any other discussed content
 * **Quizzes**: Purpose of quizzes is to both confirm you understand topics from past weeks and verify that you are present at lecture
 * **Piazza**: Be sure to ask any questions you may have on the forum; chances are that one of your peers may also have the same question!
 * **Office Hours/Open Lab Hours**: The professor, TAs, and tutors will be available to answer any in-person questions you may have during specific hours. Schedule for Office Hours/Open Lab Hours is listed on the website (see the "Staff" menu)


### Gradescope:

 Labs and homeworks will be submitted using Gradescope.

#### Labs
* ~~If you have made duplicate submissions for lab00 through both  umail@ucsb.edu and @ucsb.edu, the ucsb.edu submission will be graded. If you only made one submission, it will be graded regardless of which email you used.~~
    * Updated 1/16: Prof. K notified Gradescope of the duplication, and the accounts have been merged. 

Autograder will be enabled for all labs so be sure to make sure your code passes all test cases before submitting to receive full credit.
If your program is failing the autograder and you are absolutely sure that the program does what it is supposed to, post any issues you may have on piazza so potential fixes can be made to the autograder if needed.

Fill out the google form for partners if you have not done so (MANDATORY)
 <https://goo.gl/forms/ouvjRmS2Gmcr0g6a2>

Syllabus outlines guidelines for partner work, be sure to follow them.

#### Homework
Homework will be turned in through Gradescope.
* Based on required readings
* The current homework and the next homework assignment cover chapters 1 and 2

Can turn in either by:
* printing out the homework, scanning your work, and digitizing 
* directly type your answers on the pdf and submit


#### Piazza:
 * You can unenroll any duplicate accounts you may have from the Piazza course (invitation was sent to both @umail and @ucsb).
 * Link on how to unenroll duplicate accounts: <https://support.piazza.com/customer/en/portal/articles/1646664-drop-a-class>

# C++ Variables and Types

* Variables are used to store data.
  * Each variable must have a type associated with it.
    * Not the case in Python where a variable can be anything
    * Depending on the type, a variable occupies a different amount of bytes on disk
    * Smallest memory size is 8 bits or one byte (_quiz question_)
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

    C++ programs are guided by rules, but undefined variable protocols are usually set by developers.
Some platforms may default undefined vars to 0, others might default to garbage vals (more common);
Can be a source of tricky bugs.

_PRO TIP_: initialize variable to a value that doesn’t make sense, so you can determined when it is not being set to the expected value later in the code.
For example, if 0 was an acceptable value, then you may not notice there was an error.

_PRO TIP / Best practice_: make your variable names relevant to what they do (random names for your variables is a big NO-NO).
Naming them with something that indicates what the variable is used for makes your code mode readable and maintainable.

_C++ shortcut_: 
To increment the value of a numeric variable by 1, simply add ++ to it. E.g.,
```c++
                    int count = 7;
                    count++; //count is now 8!
```
which is the shortcut for
```c++
                    int count = 7;
                    count = count + 1; //count is now 8!
```




# Initializing, Assigning, and Modifying Variables

* Example

```c++
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

```c++
==  // true if two values are equivalent
!=  // true if two values are not equivalent
< // true if left value is less than the right value
<=  // true if left value is less than OR EQUAL to the right value
> // true if left value is greater than the right value
>=  // true if left value is greater than OR EQUAL to the right value
```

* Integer values can be used as boolean values
  * C++ will treat the number 0 as false and *any* non-zero number as true.

```c++
bool x = 5 == 1;  // x = 0
bool x = 3 != 2;  // x = 1
```

  * Combine boolean expressions using Logical Operators

```
!   // inverts true to false or false to true
&&  // boolean AND; Returns false if either expression is false, e.g., "false && true" returns false; otherwise, returns true
||  // boolean OR; Returns true if either expression is true, e.g., "false && true" returns true; otherwise, returns false
```
  
  * Example

```c++
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

```c++
if (BOOLEAN_EXPRESSION) {
  // code1
} 
else {
  // code2
}
```

* If the BOOLEAN_EXPRESSION evaluates to true, then code1 block is executed. Otherwise code2 block is executed.
* Example

```c++
int x = 4;
if ((x > 3) && (x < 6)) {
  cout << "x is either 4 or 5" << endl;
} 
else {
  cout << "x is not 4 or 5" << endl;
}
```

* Notice the curly braces, i.e. "{ ... }", also known as block statements. 
  * This allows many statements to be executed.
  * Without "{ ... }", only the following statement will be considered as part of that condition's block, and other statements are considered outside the block statement.
  * Example

```c++
int x = 4;
if ((x > 3) && (x < 6))
  cout << "x is either 4 or 5" << endl;
else
  cout << "x is not 4 or 5" << endl;
// Will have the same output as the last statement.

int x = 6;
if ((x > 3) && (x < 6))
  cout << "1" << endl;
  cout << "2" << endl; // outside if block
  cout << "3" << endl; // outside if block
```
  
  * The last two statements will always execute because they are considered outside of the code block.
  * A syntax error will appear if you try to insert an `else` after the statements since `else` can only be used after an `if` code block.
  * Note that the syntax is **NOT** `elif`, like it is in Python; you need to write out `else if() {...}`

# Multi-way If-else Statements

* Programs may require more than simply two paths of code execution.
* Multiple if-else statements can allow the program to execute many branches.
* In a multiway if/else structure, the compiler looks through each block to see if the condition evaluates to true; if it does, the rest of the structure is ignored
* If none of the conditions evaluate to true, the contents of the `else` block are executed

* Example

```c++
int x = 3;
if (x == 1)
  cout << "x equals 1" << endl;
else if (x == 2)
  cout << "x equals 2" << endl;
else if (x == 3)
  cout << "x equals 3" << endl;
else
  cout << "x does not equal 1, 2, or 3" << endl;
```

Remember to surround all code blocks with braces! We prefer that you write the above code block as shown below. This way, if you ever need to add another line of code to a block, you won't have to remember to add the curly braces, they will already be there.

```c++
int x = 3;
if (x == 1) {
  cout << "x equals 1" << endl;
}
else if (x == 2) {
  cout << "x equals 2" << endl;
 }
else if (x == 3) {
  cout << "x equals 3" << endl;
}
else {
  cout << "x does not equal 1, 2, or 3" << endl;
}
```


# Vim navigation trick

Having to alternate between vim and Unix by repeatedly typing `:q` and `vim [filename]` can sometimes get tedious.
You can temporarily push Vim to the background so that you can use the command line.

To do so, make sure that you are in the "Command mode" for Vim.

Pressing Ctrl key followed by z (usually written in instructions as Ctrl+z) will put the Vim window in the background, giving you back the command-line prompt.

Type `fg` and press Enter, to get back into Vim (`fg` stands for "**f**ore**g**round").



# Shortcut of the day

`ll` can be the same as `ls -l`, if you type `alias ll='ls -l'` on the command line (it will be remembered until you close that session).

Personally, I use `alias ll='ls -lFG'`.


# Reminder
Remember to practice syntax (include semicolons, pound signs, etc.).
Observing in-class code is not sufficient, review the lab and textbook examples to practice programming and better prepare for quizzes and tests.
When writing programs, try refine them to be more efficient (eliminate repetitive code when possible).



# Files created during lecture

## 3:30 lecture

```c++
// undef.cpp

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


```c++
// myfile.cpp

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



---
num: "lect15"
desc: "Strings, Using Linked Lists"
ready: true
pdfurl: "https://drive.google.com/open?id=1qG48RYFvB7VVEU7yP3eCkG8KRVA9KtYw"
reading: "Sections 8.1, 8.2 (Strings) + Lect 10 notes/slides"
lecture_date: 2019-03-05
---

**HW #5 due Tuesday 3/12!**

In class, we mainly talked about linked lists and walked through an example of creating a struct for a playing Card and player's Hand.

The notes below about `string` functions are meant to help with Lab 08, and are easier to understand on your own.

### Dot operator review
* When you have a struct object, use the dot operator to access the member variables by name
```cpp
struct Box{  
            int w;
            int h;
        };
```
* If you have a Box object known as b1, you can access the width of b1 with: `b1.w`

* When to use the arrow `->` ?
  * When you have a pointer to a struct type, and you want to access the member variables of the object that the pointer points to
      * `Box* boxptr = &b1;`
      * Now to access b1’s width from the pointer, you need to dereference the pointer first, then use the dot operator to access the member variable: `(*boxptr).w`
* **Note:** The **dot operator has higher precedence than the dereference operator** in ordinary order of operations. That is why you must enclose the dereferencing in parentheses, so you access the Box object first
  * `*boxptr.w` will try to get the w member variable of boxptr first, then try to dereference
    * This is an error bc the pointer itself has no member variable w
  * `boxptr->w` is a shortcut for the previous notation. As though you are “pointing” at any part of the struct 
  
If you do not include the parentheses, you'll get the following compiler error:

```
box.cpp:17:38: error: member reference type 'Box *' is a
      pointer; did you mean to use '->'?
    cout << "Box width = " << *boxptr.w;
                               ~~~~~~^
                                     ->
box.cpp:17:31: error: indirection requires pointer operand
      ('int' invalid)
    cout << "Box width = " << *boxptr.w;
                              ^~~~~~~~~
```			      
  
The complete example for the above structs:

```cpp
#include <iostream>
using namespace std;

struct Box{
            int w;
            int h;
        };
int main() {

    Box b1;
    b1.w = 42;
    b1.h = 16;
    cout << "Box width = " << b1.w;
    cout << " height = " << b1.h << endl;

    Box* boxptr = &b1;
    cout << "Box width = " << (*boxptr).w;
    cout << " height = " << (*boxptr).h << endl;

    return 0;
}
```

Compilation and output:
```
$ g++ box.cpp -o box
$ ./box
Box width = 42 height = 16
Box width = 42 height = 16
```


## Linked List Example: Cards
* 4 suits, 13 denominations

       ` A 2 3 4 5 6 7 8 9 10 J Q K`
  * Heart         
  * Diamond
  * Spade
  * Club

* Can this be stored as an array? 
* You could make an array 13 units long, store characters at a given position

* Or can create a `struct`:
    * Two attributes: suit and denomination
      * `char suit`
      * `int denomination // could this be a float? char? string?`
* Choose types based on how you are planning to use this struct
* With integers, treat Jack, Queen, King as 11, 12, 13
```cpp
struct Card{
    char suit;
    int denomination;
};
```

* Create a struct to hold a hand of cards
* How will you store a hand of cards?
  * You won’t necessarily know the size of the hand 
* One option is an array: 52 possible cards, so you would have a 52-array with a lot of empty spaces. This would be inefficient.
* A dynamic array? This will work to hold your initial hand of cards, but what if you want to add cards? If the player receives any additional cards, will have to create a new dynamic array that is slightly larger, copy over existing values and add new ones, then delete original array
  * A lot of memory swapping, also inefficient
  
* A linked list? Can add or remove cards from any location in the hand fairly easily

* What if we start with this code:
```cpp
struct Hand{
    Card c;
    Card* next;
};
```

* How do we add new cards? 
  * The Hand has no way to link to any other cards-
  * It just holds one card, a link to another, but that next card cannot link to any other card since that card is not part of a Hand (a Card ptr cannot point to another Hand)
  * We could fix this by changing the `Card*` to a `Hand*`. Then we can link a bunch of Hands together, where each Hand holds a single Card and a ptr to another Hand
  * This is weird and repetitive (why are we connecting hands, rather than cards?)

* How to go about changing this?
  * Add a `head` and `tail` pointer to `Hand`, add a `Card* next` to the `Card` struct
  * Now the Card behaves as a node, and the Hand tracks the start and end of the list
  * The Cards in between are linked to each other via their `next` pointers

* Initializing a Hand:
  * At first, should be empty, so want head and tail to be NULL
    * `Hand myHand; //creates a Hand object not a Hand pointer`
  * Access head and tail pointers with dot operator
    * `myHand.head = NULL`
    * `myHand.tail = NULL` 
  * To add a Card to the Hand:
      * Non-dynamic: 
        `Card cr;
         Card* cp = &cr
         myHand.head = cp;
         cp->next = NULL
         myHand.tail = cp
         `
  * Now, we have a linked list with a single item
  * Now, to add more cards, look at the first (head of Hand), then walk down list (following the pointers from each card)
    * add the card to the end, when you reach a NULL pointer

* The `new` operator creates variables in dynamic memory - this area of memory is known as the **heap** or **freestore**












# Strings

* As mentioned earlier this quarter, we can think of strings as an array of characters.
* This is also how the C programming languages represent strings.
* C++ supports more object-oriented functionality, and "wrapped" a character array into its own class in the standard library std::string
* In C, there is no way to inherently know the size of the string (since it is just an array).
	* Therefore, all C strings are terminated with a special character called the null character: '\0'
	* Without it, it's just considered a regular ol' array of chars.
* C++ still supports the old C-string way of doing things.

## Examples of declaring C-strings

```
// Declare a char array capable of holding 10 elements
char s1[10];

// Declare and initialize a C-string "CS16"
char s2[10] = {'C', 'S', '1', '6', '\0'};

// Shortcut to initialize a C-string. Automatically inserts
// the null character.
char s3[10] = "CS16";

// Initialize a C-string using a pointer referencing the
// start of the char array (null character is inserted).
char* s4 = "CS16";

// Null string (just contains the null character)
char* s5 = "";

cout << s2 << endl;	// CS16
cout << s3 << endl;	// CS16
cout << s4 << endl;	// CS16 (not a memory address!)
cout << *s4 << endl;	// C (dereferences the first element
```

## Example of indexing C-strings

* This works just like regular arrays and pointer arithmetic

```
cout << s2[1] << endl;		// S
cout << s2 + 1 << endl;		// S16 (reads until null char)
cout << *(s2 + 1) << endl;	// S (same as [1])
cout << *s2 + 1 << endl;	// 68 ('C' == 67, + 1 == 68)
```

## Size of a C-string (strlen)

```
char s6[] = {'a', 'b', '\0'};

cout << strlen(s2) << endl;	// 4
cout << strlen(s6) << endl;	// 2
```

## Example of not including the '\0' character

```
char s7[] = {'a', 'b'};
cout << strlen(s7) << endl;	// 7
cout << s7 << endl;		// ab??... Undefined behavior
```

* Since there isn't a null character in the C-string, the compiler doesn't know where the string ends.
* The behavior is undefined (some compilers may handle things differently).

## Example of writing our own C-string length function

```
int length(char* s) {
	char temp = *s;
	int counter = 0;
	while (temp != '\0') {
		cout << temp << endl;
		counter++;
		temp = *(s + counter);
	}
	return counter;
}

int main() {
	cout << length(s3) << endl; // 4
	cout << length(s7) << endl; // undefined, no null character
}
```

## C-String comparisons (strcmp)

* We need to use special functions for comparing string equality.
* Regular boolean operators (==, >, <, ...) doesn't translate to char arrays since these operators are comparing the addresses of the char array variables.
* We can use the strcmp function to check for equality for the content of two strings.

```
char name1[] = {'n','a','m','e','\0'};
char name2[] = {'n','a','m','e','\0'};
char name3[] = {'N','A','M','E','\0'};

if (name1 == name2) {
	cout << "It's true!" << endl;
} else {
	cout << "It's false!" << endl; 	// prints this - comparing addresses
}

-----

if (strcmp(name1, name2) == 0) {
	cout << "It's true!" << endl; 	// prints this – checks for equality
} else {
	cout << "It's false!" << endl;
}

-----

if (strcmp(name2, name3) == 0) {
	cout << "It's true!" << endl;
} else {
	cout << "It's false!" << endl;	// prints this – compares ASCII values
}

In general, if strcmp(s1, s2) is ...
	* == 0, then s1 == s2 
	* >= 0, then s1 >= s2
	* <= 0, then s1 <= s2
```

## C-string references
* array variables are like reference variables where you cannot reassign the variable once it has been initialized.
* The following is illegal:

```
char s1[] = {'a','\0'};
char s2[] = {'b','\0'};

s1 = s2; // ERROR!
```

* So can we change a string once they're created?
	* Yes! C-strings are mutable.

```
s1[0] = 'Z';
cout << s1 << endl; 	// Z
```

* strcpy allows us to copy contents of a C-string

```
strcpy(s1, "Z");
cout << s1 << endl;	// Z. s1 is replaced with 'Z','\0'
			// anything after '\0' doesn't matter.
```

* and if the array is not big enough...

```
char s1[10] = {'a','\0'};
strcpy(s1, "this is a long string");
cout << s1 << endl;	// undefined behavior, could overflow contents of memory
```

## C-string concatenation example

```
char s1[20] = "abc";
char s2[] = "123";

strcat(s1, ", it's as easy as ");
strcat(s1, s2);

cout << s1 << endl; 	// "abc, it's as easy as 123"
cout << s2 << endl;	// "123"
```

* So what's the point of learning this legacy C-string stuff? Doesn't C++ have its own way of handling strings?
	* Yes. Under-the-hood, C++ strings are character arrays, but do not rely on the null character to know when the end of the string occurs.
	* C++ strings have additional information keeping track of this (for example, it's size, capacity, ...).
	* When writing C++, you should generally always use C++ strings instead of C-strings
	* but there are some C libraries where you MUST use C-strings. So it's important to know how this works.

# C++ Strings

* To see what functionality can be used with C++ strings, see [http://www.cplusplus.com/reference/string/string/](http://www.cplusplus.com/reference/string/string/)

* `std::string` is part of the standard library (hence belonging to the `std::` namespace).
* Because the character array is on the heap, the pointer referencing this array is always of constant size:


## Example illustrating (the same) string size

```
string s1 = "";
cout << sizeof(s1) << endl;
string s2 = "abcd";
cout << sizeof(s2) << endl;
string s3 = "abcdabcdabcdabcdabcdabcdabcdabcdabcdabcd";
cout << sizeof(s3) << endl;
```

## Concatenation example

* We can concatenate C++ strings using the '+' operator.

```
string name = "Chris";
name += " Gaucho"; // + concatenates characters to a string
string name2 = "Chris Gaucho";

if (name == name2) {// Checks for equivalent characters
	cout << "The names are equal." << endl; // prints this
}
else {
	cout << "The names are not equal." << endl;
}
```

* Like C-strings, C++ strings are mutable, i.e. the memory location of a string can be changed after initialization.
* In other languages (such as Python / Java), strings are considered to be immutable.
* Other languages may use "==" to compare address equality.
* String objects contain other methods such as .length(), [], .at(), .empty(), .substr() ...

## Examples of using C++ strings

```
string x = "Hello there";
cout << x.length() << endl; // or .size()
cout << x[1] << endl;
cout << x.at(1) << endl;

string y = "";
if (y.empty())
	cout << "The string " << y << " is empty" << endl; // prints this
else
	cout << "The string " << y << " is not empty" << endl;

y += "Hi";
if (y.empty())
	cout << "The string " << y << " is empty" << endl;
else
	cout << "The string " << y << " is not empty" << endl; // prints this

cout << x.substr(1,3) << endl; // returns a string starting at index 1 of the
                               // character array and returns 3 characters (as
                               // defined in the substr parameters).Returns "ell"
cout << x.substr(1,100) << endl; // “ello there” (OK to read more characters than the
                                 // string contents. Will return the entire string.)
cout << x.substr(100,5) << endl; // ERROR

// isalpha
// returns true if the character is in the alphabet, false otherwise.

cout << isalpha('A') << endl; // 1
cout << isalpha('j') << endl; // 1
cout << isalpha(' ') << endl; // 0
cout << isalpha('&') << endl; // 0
cout << isalpha('-') << endl; // 0

// erase
string s = "CS16";
s.erase(1,2); // removes 2 characters starting at index 1
cout << s << endl; // C6
s = "CS16";
s.erase(4,1); // removes 1 characters starting at index 4
cout << s << endl; // CS16
s = "CS16";
s.erase(0,3); // removes 3 characters starting at index 0
cout << s << endl; // 6

// tolower
// returns the lower-case ASCII representation of a character
cout << tolower('A') << endl; // 97 == 'a'
cout << tolower('c') << endl; // 99 == 'c'
cout << tolower('%') << endl; // 37 == '%'

// toupper
// returns the upper-case ASCII representation of a character

// find
// returns the index of the 1st occurrence of a character in the string.
// returns string::npos if it doesn't exist.
// Note: string::npos == -1 when converted to an int type

s = "CS1616";
cout << s.find('c') << endl; // 18446744073709551615 (unsigned int type)
cout << (int) s.find('c') << endl; // -1
cout << s.find('S') << endl; // 1
cout << s.find('6') << endl; // 3 (1st occurrence)

```

---
num: "lect15"
desc: "Strings and recursion"
ready: true
pdfurl: "https://drive.google.com/open?id=1qG48RYFvB7VVEU7yP3eCkG8KRVA9KtYw"
reading: "Sections 8.1, 8.2 (Strings) + Lect 10 notes/slides"
lecture_date: 2019-03-05
---

In class, we mainly talked about linked lists and walked through an example of creating a struct for a playing Card and player's Hand.


The notes below are meant to help with Lab 08, and are easier to understand on your own.


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













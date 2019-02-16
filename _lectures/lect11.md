---
num: "lect11"
desc: "References, Pointers, Passing Parameters to functions"
ready: true
pdfurl: "https://drive.google.com/open?id=1qG48RYFvB7VVEU7yP3eCkG8KRVA9KtYw"
lecture_date: 2019-02-14
---

# Announcements!
* We've listened to your feedback from the recent survey, and will try to change the course accordingly.
    * 77% of students have completed the survey, so we will be adding points to your midterms!
    
* Homeworks were found to be not as helpful as expected. Potentially, periodical quizzes will replace homeworks, and these changes will be reflected on the syllabus shortly.

 * Lab05 and Lab06 will be released at the same time. Lab06 will be optional! It will replace your lowest score in the lab category so far.
    * The topics covered in Lab06 will be on the midterm and final, so you are encouraged to complete it anyway.

  * There will be a review session for the second midterm. Date is TBA, but it will be in a bigger room, and we will do our best to make it more structured and helpful than the past one.
  
# Lecture material

## Pass by value

Let's write a function that swaps the values of two integers variables.

```cpp
// swap.cpp
#include <iostream>
using namespace std;

void swapValue(int x, int y){
    int tmp = x;
    x = y;
    y = tmp;
    //temporary variable tmp is introduced to record the value of x before the swap
    //after the last statement, x hold the value of y; y holds the previous value of x
}

int main() {
    int a=30, b=40;
    cout<< a <<"  "<< b <<endl;
    swapValue( a,  b);
    cout<< a <<"  "<< b <<endl;
}
```

However, when we run our main(), we notice that the output is:
```
30 40

30 40
```

The values of a and b remain unchanged!

> What? How? 

This is the reason for this unexpected behavior (important):

__When a and b are passed into swapValues(), new local variables x and y are created as copies of a and b!__
These assignments took place "under the hood":
```cpp
int x = a;
int y = b;
```
__x and y are created inside the function, and are automatically deleted when the function returns. They are at different locations in memory than a and b, and, therefore, anything you do inside the function has no effect on a and b.
Initially x was equal to 30, and y was equal to 40, then they were swapped, but a and b remained unchanged!__

* When local copies of arguments are created inside the function, like here, we call this a "pass by value".

Let's look at how we can change this.

## References

We'll be using _references_!

References can be thought of as nicknames for variables. For example:
```cpp
int v = 500;
int& r = v; //r is a reference to v
```

The _ampersand sign_ (&) indicates that r is a reference to v. This means that both v and r point to the same location in memory where 500 is stored, and, essentially, r is just another name for v.

```cpp
cout << v << " " << r << endl; //500 500
v++;
r++;
cout << v << " " << r << endl; //502 502
```

* Note! r cannot be reassigned to another variable. Once it's become a nickname for something, it will remain this way.

How can we apply this to our previous problem?

## Pass by reference



Notice at how the following code differs from the previous one:
void swapValue(__int& x, int &y__) as opposed to void swapValue(int a, int b)

```cpp
// swap-ref.cpp
#include <iostream>
using namespace std;

void swapValue(int& x, int& y){
    int tmp = x;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout<< "&x = " << &x <<"  "<< "&y = " << &y <<endl;
    x = y;
    y = tmp;
}

int main() {
    int a=30, b=40;
    cout << "=== Before the swap ===" << endl;
    cout<< a <<"  "<< b <<endl;
    swapValue( a,  b);
    cout << "=== After the swap ===" << endl;
    cout<< a <<"  "<< b <<endl;
    cout<< "&a = " << &a <<"  "<< "&b = " << &b <<endl;
}
```

These assignments took place "under the hood":
```cpp
int& x = a;
int& y = b;
```
When references to variables are created inside the function, we call it a "pass by reference".

As you've learned from last paragraph, x and y are references of a and b, and therefore all changes to x and y apply to a and b.

* Note: x and y only exist within swapValues(). they cannot be called from main() or somewhere else, as they are deleted when the function returns. (The objects that they referenced remain, of course).

> But what is &a and &x that are printed?

These are locations of a and x in memory. Locations in memory are represented in hexadecimals, so printing (&a) will result in something like 0x7ffc517b543a.

You can get a location of any variable using the same ampersand sign (&). This is the second meaning of the ampersand sign, which may be confusing. 

This is the output:

```cpp
=== Before the swap ===
30  40
&x = 0x7fffbea98426  &y = 0x7fffbea9841c
=== After the swap ===
40  30
&a = 0x7fffbea98426  &b = 0x7fffbea9841c
```


Let's pause and review what we've learned:
* References are like nicknames for variables
* References have the same location as the variables they are assigned to
* To create a reference, use the (&) sign:
```cpp
int& b = a; //b is a reference to a
```
* References cannot change the variables they are assigned to
```cpp
int a = 10, c = 9;
int& b; //b (reference) was just created
b = a; //b is not assigned to a; b is a reference to a
b = c; //ILLEGAL: you are attempting to reassign b
```
* The ampersand sign can help us get the location of any variable in memory
```cpp
int a = 1337;
cout << "a: " << a << endl; //a: 1337
cout << "&a: " << &a << endl; //&a: 0x2a8c682ff43a
int& b = a; //b is now a reference to a, pointing to the same location
b = b + 3;
cout << "b: " << b << endl; //b: 1340
cout << "&b: " << &b << endl; //&b: 0x2a8c682ff43a
```

Make sure this makes sense.


## Same functionality using pointers instead

Remember how we were able to get the memory address of any variable using the ampersand sign?
As it turns out, we can store those locations in something called _pointers_.

Pointers are data types just like ints or chars, but instead of numbers and charaters, they store memory addresses.

To create a pointer, specify the type of an object that p will point to, and add an _asterisk_ (*).
```cpp
int a = 80;
cout << &a << endl; //0x2a8c64d78a0a
int* p; //p (pointer to an integer) was created
p = &a; //p now stores the address of a.
cout << p << endl; //0x2a8c64d78a0a
```

* Notice that we did not have to print &p to get the location of a. 'p' already stores it, just like 'a' stores 80.

What can we do with pointers? Well, we can access the things they point to using the asterisk.
```cpp
int a = 80;
int* p = &a;
cout << p << endl; //0x2a8c64d78a0a
cout << *p << endl; //80
```

__This is very important__
* When you call p, you access the memory address stored in p
* When you call *p, you access the value stored at the memory address that is in p.

This process of getting the value stored in memory is called _dereferencing_ a pointer.

Look at the last example with a and p.
*p is equivalent to a.
Why? Because p == (&a), so *p == *(&a)
This command is saying: "Get me the address of a (&a), and then get me what's stored at that address (a)"

Let's see how we can solve the same old problem using pointers:

```cpp
// swap-ptr.cpp
#include <iostream>
using namespace std;

void swapValue(int* x, int* y){
    cout << "x = " << x << endl;  // address of a
    cout << "*x = " << *x << endl; // a
    cout << "y = " << y << endl; // address of b
    cout << "*y = " << *y << endl; //b
    cout<< "&x = " << &x <<"  "<< "&y = " << &y <<endl;
    
    int tmp = *x; //tmp stores 30
    *x = *y;
    *y = tmp;
}

int main() {
    int a=30, b=40;
    cout << "=== Before the swap ===" << endl;
    cout<< a <<"  "<< b <<endl;
    swapValue( &a, &b); //passing LOCATIONS OF a and b
    cout << "=== After the swap ===" << endl;
    cout<< a <<"  "<< b <<endl;
    cout<< "&a = " << &a <<"  "<< "&b = " << &b <<endl;
}
```

These assignments took place "under the hood":
```cpp
int* x = &a;
int* y = &b;
```

We accessed the values stored in a and b by dereferencing x and y which store their locations.


Let's pause and review what we've learned:
* Pointers store locations of variables
* To create pointers, you need to specify the type of object it will point to (int, char, string), and use the asterisk sign (*)
* To store a variable's location, use the anpersand sign from earlier:
```cpp
int* p = a; //p is a pointer to a, p stores a's location
```
* Pointers CAN change what they point to!
```cpp
int a = 10, c = 9;
int* p; //p (pointer) was just created
p = &a; //p points to a
cout << "*p: " << *p << endl; //10
p = &c; //p now points to c
cout << "*p: " << *p << endl; //9
```


Make sure this also makes sense.


## Pointers and arrays

When we learned about arrays, we promised to come back to them once we've leanred about pointers. Here we are.
The variable declared as an array is actually just a pointer to the first element.
```cpp
int arr[] = {5,4,3}; // arr points to the first element (currently 5)
cout << arr << endl; //0x2a8c64d78a14
```

* To get the first element, we would type arr[0];
  * This is equivalent to *arr
* To get the second element, we would type arr[1];
  * This is equivalent to *(arr+1)
  * This is what is called pointer arithmetic, and it is used to get to locations close to what are known.
* When we learned about arrays, we said that it was important that all elements in an array were adjacent in memory. This is why. Only in this case using pointer arithmetic helps us traverse through an array.

* For those of you who want to know the specifics:
  * Remember how value of arr was 0x2a8c64d78a14?
  * This tells us that the first element is at location 0x2a8c64d78a14.
  * The size of one integer is 4 bytes, so the second element is at location 0x2a8c64d78a18.
  * The third element of arr is at location 0x2a8c64d78a1b (hexadecimal addition: 18 -> 19 -> 1a -> 1b)

* Final notes on pointers:
  * When pointers are initialized, they hold junk values. Defererencing (*p) such pointers is dangerous. It might, depending on what's inside, tamper with your data, or attempt to reach something that it doesn't have access to, causing a segmentation fault.
  * A common solution is to initialize your pointer to NULL (int* p = NULL or int* p = 0)
  * Pointers are used to travel to a different world called "heap" that we are going to talk about later in the course.
  * We will be using pointers a lot!

## Final notes

Pointers and references are confusing! They are arguably the hardest topic of the course, and are used a lot in C++.
They are not intuitive, and may not make sense at first. That's okay. We will be using them a lot, and it will get better. Use the resourses you have, including these notes and slides, and ask for help. Don't wait until the week of the midterm.

Next time: structs, more pointers, dynamic arrays

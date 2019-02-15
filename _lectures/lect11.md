---
num: "lect11"
desc: "References, Pointers, Passing Parameters to functions, Structs"
ready: true
pdfurl: "https://drive.google.com/open?id=1qG48RYFvB7VVEU7yP3eCkG8KRVA9KtYw"
lecture_date: 2019-02-14
---

To be updated with more notes...


## Pass by value

```cpp
// swap.cpp
#include <iostream>
using namespace std;

void swapValue(int x, int y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main() {
    int a=30, b=40;
    cout<< a <<"  "<< b <<endl;
    swapValue( a,  b);
    cout<< a <<"  "<< b <<endl;
}
```


## Pass by reference

```cpp
// swap-ref.cpp
#include <iostream>
using namespace std;

void swapValue(int& x, int& y){
    int tmp = x;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "tmp = " << tmp << endl;
    cout<< "&x = " << &x <<"  "<< "&y = " << &y <<endl;
    cout << "&tmp = " << &tmp << endl;

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



## Same functionality using pointers instead

```cpp
// swap-ptr.cpp
#include <iostream>
using namespace std;

void swapValue(int* x, int* y){
    int tmp = *x;

    cout << "x = " << x << endl;  // address of a
    cout << "*x = " << *x << endl;
    cout << "y = " << y << endl; // address of b
    cout << "*y = " << *y << endl;
    cout << "tmp = " << tmp << endl;
    cout<< "&x = " << &x <<"  "<< "&y = " << &y <<endl;
    cout << "&tmp = " << &tmp << endl;

    *x = *y;
    *y = tmp;
}

int main() {
    int a=30, b=40;
    cout << "=== Before the swap ===" << endl;
    cout<< a <<"  "<< b <<endl;
    swapValue( &a, &b);
    cout << "=== After the swap ===" << endl;
    cout<< a <<"  "<< b <<endl;
    cout<< "&a = " << &a <<"  "<< "&b = " << &b <<endl;
}
```

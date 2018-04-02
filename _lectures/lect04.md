---
num: "lect04"
desc: "More loops, working with floats and doubles"
ready: false
pdfurl: /lectures/CS16_Lecture4.pdf
annotatedpdfurl: /lectures/CS16_Lecture4_ann.pdf
annotatedready: false
lecture_date: 2018-04-11
---

# Code from lecture

## Practice with single for loops
* Summing a series: 

**Exercise: Write a program that takes a parameter n as a command line arguments and computes the following:**

```
1 + 1/2 + 1/3 + ....+ 1/n
```
where n is the number of terms in the series. Sample run of the program is below:

```
$./sumSeries 2
Sum of the first 2 terms is: 1.500
```
## Nested Loops

ASCII Art with nested loops

**Exercise: Write a program to draw a square of a given width**
Example usage:

```
$./drawSquare 
Enter the width of the square: 5
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```
Complete the code below

```
#include <iostream>
using namespace std;

void drawSquare(int n); // Function to draw a square of side n

int main(){
  // Complete the code below:
  
  
  cout<<"Enter the width of the square : "
  cin>> num;
    
}
```


<div class="pagebreak"></div>


```

// Write the definition of a function drawSquare that takes one parameter
void drawSquare(int n){













}
```

**Exercise: Write a program to draw a triangle of a given width**
Example usage:

```
$./drawTriangle
Enter the width of the triangle: 5
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```

Complete the code below

```
#include <iostream>
using namespace std;

void drawTriangle(int n); // Function to draw a triangle of side n

int main(){
  // Complete the code below:
  
  
  cout<<"Enter the width of the triangle : "
  cin>> num;
  
  
}

// Which line of code do you need to modify
void drawTriangle(int n){
  for(int j = 0 ; j < n; j++){   //A
    for(int i = 0 ; j < n; j++){ //B
      cout<<"* ";  //C
    }
    cout<<endl;    //D
  }
  cout<<endl;      //E
}

```

**Math Puzzle**
One of the powers of computing is being able to do a brute-force search for a solution to a problem. Trial and error works just fine for some problems. In fact, computers can be especially good at such problems. Consider this:

Horses cost $10, pigs cost $3, and rabbits are only $0.50. A farmer buys 100 animals for $100, How many of each animal did he buy?  

Write a program to do this.

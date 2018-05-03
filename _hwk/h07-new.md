---
num: "h07"
desc: "Chapter 9 and 13: Dynamic memory allocation and dynamic arrays), Linked-lists"
ready: false
assigned: 2018-05-18 9:00:00.00-8:00
due: 2018-05-25 23:59:00.00-7:00
---
Read Chapter 9, sections 9.1-9.2 (pages 508 - 533), Chapter 13, section 13.1 (pages 740- 759). The key learning goals are dynamic memory allocation and its use in dynamic arrays and linked-lists. You don't need to turn this homework in. To earn credit for this homework, complete the corresponding quiz on gauchospace AFTER you have completed the pen and pencil version of the homework. The quiz will be available one day before the due date indicated on the homework.

<b>PLEASE MARK YOUR HOMEWORK CLEARLY, REGARDLESS OF IF YOU WRITE IT OUT IN INK OR PENCIL! FOR BEST RESULTS, SAVE THIS PAGE AS A PDF, THEN PRINT THE PDF.</b>

1.(10 pts) What is the output of the following program? Using a pointer diagram show the evolution of all data objects in memory, clearly marking elements on the run-time stack and on the heap. Mark the size of all data objects. Assume the code is embedded in a correct and complete program.
<div markdown="1">
```cpp
int *p1, *p2, *p3;
p1 = new int;
p2 = new int;
p3 = p1;
*p1 = 20;
*p2 = 30;
cout<< *p1<< " "<< *p2<<" "<<*p3<< endl;
p1 = p2;
cout<< *p1<< " "<< *p2<<" "<<*p3<< endl;
*p3 = *p2;
cout<< *p1<< " "<< *p2<<" "<<*p3<< endl;
```
</div>

<div style="margin-bottom:2em"></div>

2.(10 pts) What is the output of the following program? Using a pointer diagram show the evolution of all data objects in memory, clearly marking elements on the run-time stack and on the heap. Mark the size of all data objects. Assume the code is embedded in a correct and complete program.
<div markdown="1">
```cpp
int array_size = 4, *a ;
a = new int[array_size];
int *p = a;
for(int i=0; i< array_size; i++)
    *(a+i) = 2*i;
p[0] = 10;
for(int i=0; i< array_size; i++)
    cout<<a[i]<<" ";
cout<<endl;
```
</div>

<div class="pagebreak"></div>
3.(2 pts) Consider the 'head' variable on page 741. What is the value of head for an empty list?
<div style="margin-bottom:1em"></div>


4.(6 pts)  Assume you are given a pointer to the head of an existing list (named head). The nodes of the linked-list are of type struct Node (as defined on display 13.7 on page 754). Write a for-loop to iterate through the list and print the data of every other element of the list (starting with the first element).
<div style="margin-bottom:8em"></div>

5.(12 pts) Consider a linked list where each node is of the same type as in the previous question. Complete the definition of the function deleteNode given below, that takes as input a pointer to the head of the list, and an integer value. The function should delete all the nodes in the list whose data members have the given value. If the list is empty or if there is no node with the given value, the function should not do anything.
<div markdown="1">
```cpp
void deleteNode(struct Node*& head, int value){








































}

```

<div class="pagebreak"></div>

For all the following questions, use the definitions of the struct Node and struct LinkedList from lab 06.

<div style="margin-bottom:1em"></div>

6.(10 pts) Implement a function that returns the number of even elements in a linked list. Test your code before writing it out. Illegible code will receive 0 credit. Below is the declaration of the function
<div markdown="1">
```cpp
int countEven(LinkedList* list);
```

</div>
7.(2 pts) In the implementation of a linked list, why does struct Node contain a pointer member variable of type Node *?
<div style="margin-bottom:6em"></div>

<div class="pagebreak"></div>
8.(10 pts) You are given the following memory map, where the numbers on the left column are memory locations and the numbers on the right are 4 byte values stored at each location. Suppose that a linked-list is stored in the given memory segment. In the memory map there exists a pointer (named 'list') to a LinkedList object. You are given the location of list to be 0x8008. Draw the pointer diagram for the linked list showing all the nodes in the linked-list, the data stored in each node and all pointers, starting with the variable 'list'. The LinkedList and Node types are the same as those defined in lab06
<div style="margin-bottom:1em"></div>
<div markdown="1">
```code
Memory
Address  Value
0x8000  0x8008
0x8004  0x8020
0x8008  0x803C
0x800C  0x000A
0x8010  0x8018
0x8014  0x0002
0x8018  0x8030
0x801C  0x0004
0x8020  0x0005
0x8024  0x8014
0x8028  0x0020
0x802C  0x0000
0x8030  0x0003
0x8034  0x8028
0x8038  0x8008
0x803C  0x8000
0x8040  0x8028
```
</div>
<div style="margin-bottom:1em"></div>
9.(10 pts) Implement a function that takes a linked list as an input and returns a dynamic array containing the data elements of the linked list. Test your code before writing it out. Illegible code will receive 0 credit.
<div markdown="1">
```cpp
int* linkedListToArray(LinkedList * list);
```
10.(8 pts) Write the definition of a structure type called UndergradStudents. This structure should contain student ID numbers, first and last names, major, and GPA scores for each undergraduate year.
<div style="margin-bottom:8em"></div>

11.(14 pts) Write a program that uses the definition of the structure UndergradStudents from the previous question to *declare* and then *initialize* an array of 3 objects of this structure (hint: you can do this with the same approach you define/initialize an array of any other type). You **must initialize the values in the program, not by user input**.  The initial values are shown in the table below. Then write the definition of a function with the signature <code> void printRecords(struct UndergradStudents *records, int numrecords);</code> The function should print out the values of the array of objects passed to it as shown in the sample below, along with each student's AVERAGE GPA score (calculated to a precision of 2 decimal places). You **must use a loop to print the output**. Your program should appropriately call the printRecords() function to print the student records and the average GPA.

<div markdown="1">
|---|---|---|---|---|---|---|---
|ID | First name| Last Name| Major | GPA Yr1|  GPA Yr2| GPA Yr3| GPA Yr4
|1 | Joe | Shmoe | EE | 3.8 | 3.3 | 3.4 | 3.9
|2 | Macy | Chen | CS | 3.9 | 3.9 | 4.0 | 4.0
|3 | Peter | Patrick | ME | 3.8 | 3.0 | 2.4 | 1.9

OUTPUT:

```
These are the student records:
ID# 1, Shmoe, Joe, Major: EE, Average GPA: 3.60
ID# 2, Chen, Macy, Major: CS, Average GPA: 3.95
ID# 3, Peter, Patrick, Major: ME, Average GPA: 2.77
```


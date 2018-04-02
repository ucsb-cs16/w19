---
layout: lab
num: lab06
ready: false
desc: "Linked lists and array lists"
assigned: 2018-05-15 09:00:00.00-8
due: 2018-05-21 23:59:00.00-7
---

# Goals of this lab

The goal of this lab is two fold: dynamic memory management on the heap and implementing linked lists. The relationship between the two is that dynamic memory management is almost always used in the implementation of linked lists.

*Dynamic memory management on the heap*: Managing data on the heap using new and delete is fundamentally different from that on the stack. The heap and stack two different areas in program memory,  The stack is used to automatically manage the allocate and deallocation of memory for local variables. Specifically memory is allocated for local variables when a function is called and deallocated when the function returns. On the other hand data on the heap is allocated and deallocated at the will of the programmer. So, when should you use the heap instead of the stack? When you want your data to persists in memory beyond the execution time of a single function.  

*Linked lists* : Linked lists were covered in class. They are list arrays lists in that they store a list of data elements. However unlike arrays, the elements of a linked list are not placed in contiguous memory locations. By the end of this lab you should be able to have a working knowledge of how to implement linked lists, test your implementation and contrast them with an array based implementation.


# Step by Step Instructions

## Step 1: Getting Started

1. Decide if you are working alone, or working in a pair. Pair programming is OPTIONAL for this lab.

2. If you are working as a pair, go to submit.cs, navigate to this lab page and create a team for you and your pair partner. Do this by clicking on the blue "Join Groups" button, then follow directions. Choose who will be the first driver and who will start as navigator, and then remember to switch (at least once) during the lab. But you should probably know the long-term goal too: each partner should participate in both roles in approximately equal parts over the course of the quarter. We realize it is not possible to equally split time in every lab, but it's worth trying, and it is possible to make up for unequal splits in future labs. We trust you will try to meet this goal. Thanks!

3. Go to github and create a git repo for this lab following the naming convention specified in previous labs (this step carries style points, see our feedback on previous labs to understand what we are looking for). If you are working with a partner only one of you needs to create the repo.

4. If you are working with a partner and you are the one who created the github repo, add your partner as a collborator on the repo

5. Decide on initial navigator and driver.

6. Driver, log on to your CSIL account.

7. Open a terminal window and log into the correct machine.

8. Change into your CS 16 directory

Note: Remember to push your work to github at the end of EVERY work session. That way, both partners always have access to the latest version of the code even if the code is being developed on one partner's CoE account.


## Step 2: Obtain the starter code

This step is similar to lab02, first open terminal and go to the directory where you cloned the starter code in lab02 and pull the latest version of the starter code.

```
  cd ~/cs16/cs16-w18-starter-code
  git pull
```
Clone your github repo in the ~/cs16/ directory. Then cd into your repo directory.
```
  cd ../lab06_gaucho_ally
```
Copy the code from your starter code directory to your local lab06 repo using the following command.

```
  cp ~/cs16/cs16-w18-starter-code/lab06/* ./
```

Typing the list (ls) command should show you the following files in your current directory

```
[dimirza@csil-03 lab06-startercode]$ ls
addIntToEndOfListTest.cpp    arrayToStringTest.cpp  Makefile
addIntToStartOfListTest.cpp  linkedListFuncs.cpp    tddFuncs.cpp
arrayFuncs.h                 linkedListFuncs.h      tddFuncs.h
arrayToLinkedListTest.cpp    linkedList.h
[dimirza@csil-03 lab06-startercode]$

```


## Step 3: Reviewing the files and what your tasks are

Here is a list of your tasks for this lab:

* Run "make tests"

1. You will see that the tests for arrayToString and linkedListToString pass.
2. But notice that tests for addIntToEndOfListTest and addIntToStartOfListTest are failing.

Your job is to understand all of the skeleton code that is provided to you and then write the code for addIntToEndOfList and addIntToStartOfList.  Both are in linkedListFuncs.cpp. There are clues in the file to help you.

As in the previous lab you are required to draw pointer diagrams for the code that you have written and upload the diagrams to your github repo.
Draw diagrams to show the evolution of objects in memory as the following code is executed for YOUR implementation of 'addIntToStartOfList' and 'addIntToEndOfList. You must trace through every line of code that is executed as a result of the given code.
In your diagrams you must clearly indicate which objects are created in the stack and which on the heap.  

```
int empty[0]={};
LinkedList *emptyList = arrayToLinkedList(empty,0);
addIntToStartOfList(emptyList,7);
addIntToStartOfList(emptyList,8);
freeLinkedList(emptyList);

```
Save your diagram for the above code in a file named "StartOfListPointerDiagram". Your file can be an image file or a pdf

Draw a new diagram for the code given below which is executed independent of the above code.

```
int empty[0]={};
LinkedList *emptyList = arrayToLinkedList(empty,0);
addIntToEndOfList(emptyList,7);
addIntToEndOfList(emptyList,8);
freeLinkedList(emptyList);
```
Save your diagram for the above code in a file named "EndOfListPointerDiagram". Your file can be an image file or a pdf

Upload both diagrams to your github repo.

When the test cases pass, AND you have successfully uploaded your pointer diagrams to github, you are done.

* Run "make tests" and see the correct output.
* Try submitting to submit.cs to see if your output is correct.
* YOU ARE READY TO CHECK YOUR WORK.

## Step 4: Checking your work before submitting

When you are finished, you should be able to type  <code>make clean</code> and then <code>make tests</code> and see the following output:

```
-bash-4.2$ make clean
/bin/rm -f arrayToStringTest arrayToLinkedListTest addIntToEndOfListTest addIntToStartOfListTest  *.o
-bash-4.2$ make tests
clang++ -Wall -Wno-uninitialized   -c -o arrayToStringTest.o arrayToStringTest.cpp
clang++ -Wall -Wno-uninitialized   -c -o linkedListFuncs.o linkedListFuncs.cpp
clang++ -Wall -Wno-uninitialized   -c -o tddFuncs.o tddFuncs.cpp
clang++ -Wall -Wno-uninitialized  arrayToStringTest.o linkedListFuncs.o tddFuncs.o -o arrayToStringTest
clang++ -Wall -Wno-uninitialized   -c -o arrayToLinkedListTest.o arrayToLinkedListTest.cpp
clang++ -Wall -Wno-uninitialized  arrayToLinkedListTest.o linkedListFuncs.o tddFuncs.o -o arrayToLinkedListTest
clang++ -Wall -Wno-uninitialized   -c -o addIntToEndOfListTest.o addIntToEndOfListTest.cpp
clang++ -Wall -Wno-uninitialized  addIntToEndOfListTest.o linkedListFuncs.o tddFuncs.o -o addIntToEndOfListTest
clang++ -Wall -Wno-uninitialized   -c -o addIntToStartOfListTest.o addIntToStartOfListTest.cpp
clang++ -Wall -Wno-uninitialized  addIntToStartOfListTest.o linkedListFuncs.o tddFuncs.o -o addIntToStartOfListTest
./arrayToStringTest
PASSED: arrayToString(fiveThrees,5)
PASSED: arrayToString(zeros,3)
PASSED: arrayToString(empty,0)
PASSED: arrayToString(primes,10)
PASSED: arrayToString(meaning,1)
PASSED: arrayToString(mix,10)
./arrayToLinkedListTest
PASSED: linkedListToString(list)
PASSED: linkedListToString(emptyList)
PASSED: linkedListToString(singletonList)
./addIntToEndOfListTest
PASSED: linkedListToString(list)
PASSED: list->head->data == 42
PASSED: list->tail->data == 25
PASSED: list after adding 25
PASSED: list->head->data == 42
PASSED: list->tail->data == 31
PASSED: list after adding 31
PASSED: list->head == NULL
PASSED: list->tail == NULL)
PASSED: linkedListToString(emptyList)
PASSED:
PASSED: list->head->data == 7
PASSED:
PASSED: list->tail->data == 7)
PASSED: list after adding 7
PASSED: list != NULL
PASSED: list->head == list->tail
PASSED: list after adding -6
PASSED:
PASSED: list->head->data == 7
PASSED:
PASSED: list->tail->data == -6)
./addIntToStartOfListTest
PASSED: linkedListToString(list)
PASSED: list after adding 25
PASSED: list after adding 31
PASSED: linkedListToString(emptyList)
PASSED: list after adding 7
PASSED: list after adding -6
-bash-4.2$
```

At that point, you are ready to try submitting on the submit.cs system.

=== An important word about academic honesty and the submit.cs system ===

We will test your code against other data files too&mdash;not just these.  So while you might be able to pass the tests on submit.cs now by just doing a hard-coded "cout" of the expected output, that will NOT receive credit.    

To be very clear, code like this will pass on submit.cs, BUT REPRESENTS A FORM OF ACADEMIC DISHONESTY since it is an attempt to just "game the system", i.e. to get the tests to pass without really solving the problem.

I would hope this would be obvious, but I have to say it so that there is no ambiguity: hard coding your output is a form of cheating, i.e. a form of "academic dishonesty".  Submitting a program of this kind would be subject not only to a reduced grade, but to possible disciplinary penalties.    If there is <em>any</em> doubt about this fact, please ask your TA and/or your instructor for clarification.

## Step 5: Submitting via submit.cs

Here is the command to submit this week's labs:

```
~submit/submit -p 926 *.cpp *.h
```

= Grading Rubric =

Points from submit.cs automatic grading:


<table border="1">
  <tr><th>Test Group</th><th>Test Name</th><th>Value</th></tr>
<tr><td>addIntToEndOfListTest</td><td><p style="color:green;margin:0;padding:0;">addIntToEndOfListTest</p></td><td>(50 pts)</td></tr>
<tr><td>addIntToStartOfListTest</td><td><p style="color:green;margin:0;padding:0;">addIntToStartOfListTest</p></td><td>(50 pts)</td></tr>
<tr><td>arrayToLinkedListTest</td><td><p style="color:green;margin:0;padding:0;">arrayToLinkedListTest</p></td><td>(0 pts)</td></tr><tr><td>arrayToStringTest</td><td><p style="color:green;margin:0;padding:0;">arrayToStringTest</p></td><td>(0 pts)</td></tr></table>

## Other points:

* (50 pts) Pointer diagrams
* (50 pts) Code style, including but not limited to:
1. Code can be easily understood by humans familiar with C++ (including both the author(s) of the code, and non-authors of the code.)
2. Code is neatly indented and formatted, following standard code indentation practices for C++ as illustrated in either the textbook, or example code given in lectures and labs
3. Variable names choices are reasonable
** Code is reasonably "DRY" (as in "don't repeat yourself")&mdash;where appropriate, common code is factored out into functions
** Code is not unnecessarily or unreasonably complex when a simpler solution is available

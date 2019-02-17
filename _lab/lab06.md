---
layout: lab
num: lab06
ready: true
desc: "Advanced array lists and dynamic arrays"
assigned: 2019-02-19 09:00:00.00-8
due: 2019-02-26 09:00:00.00-8
---

## This lab is **optional**. 
If you choose to complete it, it will replace your lowest score in the lab category so far (if your Lab06 score is higher).

**The topics covered in Lab06 will be on the midterm and final, so you are encouraged to complete it.**



<h2>Introduction -- Important: Read this!</h2>

The mentors will be looking for (and grading) your programming style, such as proper use of comments, tab indentation, good variable names, and overall block and function designs. You are also required to write pre- and post-conditions for every function you write, whether it is one you need to fill in from the starter code or one that you have declared and define yourself. So, **it is not enough for your lab to pass Gradescope tests**! Please read the instructions herein <b>carefully</b>.

# Goals of this lab

The goal of this lab is get more practice with iterating through arrays and dynamically allocating memory. Continue to practice code tracing to reason about your code. We request that you DO NOT ask the staff to debug your code. They have been specifically instructed not to debug for you, rather to guide in the process.

# Step by Step Instructions: PLEASE READ CAREFULLY!

## Step 1: Getting Started

1. Go to GitHub and create a git repo for this lab following the naming convention specified in previous labs (this step carries style points, see our feedback on previous labs to understand what we are looking for). 

2. Log on to your CSIL account and open a terminal window

3. Change into your CS 16 directory

## Step 2: Create a new repo and clone it to your local directory <a name="step2"></a>

In lab04,  we have done the same thing. So if you don't know to how to do that, please refer to lab04 for details. 
## Step 3: Get the starter code from a local directory <a name="step3"></a>
* Copy the starter code by typing the following command:

```
cp /cs/faculty/ykk/cs16/labs/lab06/* ~/cs16/lab06_<username>
```

Typing the list (`ls`) command should show you the following files in your current directory

```
$ ls
arrayFuncs.cpp  Makefile            README.md
arrayFuncs.h    moreArrayFuncs.cpp  tddFuncs.cpp
mafTest.cpp     moreArrayFuncs.h    tddFuncs.h
$

```

Push the initial version of the code to GitHub before making any changes by typing the following commands

```
git add .
git commit -m "Initial version of Lab 6"
git push origin master
```
Note: Remember to push your work to GitHub at the end of EVERY work session. 



## Step 4: Reviewing the files and what your tasks are

Here is a list of your tasks for this lab:

### Step 4a: Familiarize yourself with the big picture

Type `make tests` and you will see some tests pass, but some fail.

Your goal is to make all the tests pass.

There is only one file that you need to edit this week: 

* <code>moreArrayFuncs.cpp</code> contains more functions that deal with arrays.  These are in addition to the arrayFuncs.cpp that you worked with before in lab04.


### Step 4b: Work on the array functions

There are 9 functions you will need to write for this lab:

* <code>indexOfMax</code>
* <code>indexOfMin</code>
* <code>largestValue</code>
* <code>smallestValue</code>
* <code>sum</code>
* <code>copyElements</code>
* <code>copyOddOnly</code>
* <code>multiplyPairwise</code>
* <code>createArray</code>

Each one has a set of tests which can be found under its corresponding heading when you type <code>make tests</code>. For example, the `indexOfMax` tests look like this to start: 

```
--------------INDEX_OF_MAX--------------
   FAILED: indexOfMax(fiveThrees,5)
     Expected: 0 Actual: -42
   FAILED: indexOfMax(zeros,3)
     Expected: 0 Actual: -42
   FAILED: indexOfMax(primes,1)
     Expected: 0 Actual: -42
   FAILED: indexOfMax(primes,5)
     Expected: 4 Actual: -42
   FAILED: indexOfMax(primes,10)
     Expected: 9 Actual: -42
   FAILED: indexOfMax(meaning,1)
     Expected: 0 Actual: -42
   FAILED: indexOfMax(mix1,10)
     Expected: 5 Actual: -42
   FAILED: indexOfMax(mix2,10)
     Expected: 5 Actual: -42
   FAILED: indexOfMax(mix1,3)
     Expected: 1 Actual: -42
   FAILED: indexOfMax(mix2,3)
     Expected: 1 Actual: -42
   FAILED: indexOfMax(mix2,1)
     Expected: 0 Actual: -42
   FAILED: indexOfMax(mix2,5)
     Expected: 4 Actual: -42
```

You should replace each function stub with the correct code for the function until all of the tests for each one pass. It is recommended that you work on the functions one at a time in the order that they are presented above. That is, get all the tests to pass for `indexOfMax` then `indexOfMin` and so on. When all the tests pass, move on to the next step. 

## Step 5: Checking your work before submitting

When you are finished, you should be able to type  <code>make clean</code> and then <code>make tests</code> and see the following output:


```
-bash-4.2$ make clean
/bin/rm -f mafTest *.o
-bash-4.2$ make tests
clang++ -Wall -Wno-uninitialized   -c -o mafTest.o mafTest.cpp
clang++ -Wall -Wno-uninitialized   -c -o moreArrayFuncs.o moreArrayFuncs.cpp
clang++ -Wall -Wno-uninitialized   -c -o tddFuncs.o tddFuncs.cpp
clang++ -Wall -Wno-uninitialized   -c -o arrayFuncs.o arrayFuncs.cpp
clang++ -Wall -Wno-uninitialized  mafTest.o moreArrayFuncs.o tddFuncs.o arrayFuncs.o -o mafTest
./mafTest
--------------INITIALIZING--------------
PASSED: arrayToString(fiveThrees,5)
PASSED: arrayToString(zeros,3)
PASSED: arrayToString(empty,0)
PASSED: arrayToString(primes,5)
PASSED: arrayToString(primes,10)
PASSED: arrayToString(meaning,1)
PASSED: arrayToString(mix1,10)
PASSED: arrayToString(mix2,10)
PASSED: arrayToString(descending,5)
--------------INDEX_OF_MAX--------------
PASSED: indexOfMax(fiveThrees,5)
PASSED: indexOfMax(zeros,3)
PASSED: indexOfMax(primes,1)
PASSED: indexOfMax(primes,5)
PASSED: indexOfMax(primes,10)
PASSED: indexOfMax(meaning,1)
PASSED: indexOfMax(mix1,10)
PASSED: indexOfMax(mix2,10)
PASSED: indexOfMax(mix1,3)
PASSED: indexOfMax(mix2,3)
PASSED: indexOfMax(mix2,1)
PASSED: indexOfMax(mix2,5)
--------------INDEX_OF_MIN--------------
PASSED: indexOfMin(fiveThrees,5)
PASSED: indexOfMin(zeros,3)
PASSED: indexOfMin(primes,5)
PASSED: indexOfMin(primes,10)
PASSED: indexOfMin(meaning,1)
PASSED: indexOfMin(mix1,10)
PASSED: indexOfMin(mix2,10)
PASSED: indexOfMin(mix1,3)
PASSED: indexOfMin(mix2,3)
PASSED: indexOfMin(descending,5)
PASSED: indexOfMin(descending,1)
--------------LARGEST_VALUE--------------
PASSED: largestValue(fiveThrees,5)
PASSED: largestValue(zeros,3)
PASSED: largestValue(primes,5)
PASSED: largestValue(primes,10)
PASSED: largestValue(meaning,1)
PASSED: largestValue(mix1,10)
PASSED: largestValue(mix2,10)
PASSED: largestValue(mix1,3)
PASSED: largestValue(mix2,3)
PASSED: largestValue(descending,5)
PASSED: largestValue(descending,1)
--------------SMALLEST_VALUE--------------
PASSED: smallestValue(fiveThrees,5)
PASSED: smallestValue(zeros,3)
PASSED: smallestValue(primes,5)
PASSED: smallestValue(primes,10)
PASSED: smallestValue(meaning,1)
PASSED: smallestValue(mix1,10)
PASSED: smallestValue(mix2,10)
PASSED: smallestValue(mix1,3)
PASSED: smallestValue(mix2,3)
PASSED: smallestValue(descending,5)
PASSED: smallestValue(descending,1)
--------------SUM--------------
PASSED: sum(fiveThrees,5)
PASSED: sum(zeros,3)
PASSED: sum(primes,5)
PASSED: sum(primes,10)
PASSED: sum(meaning,1)
PASSED: sum(mix1,10)
PASSED: sum(mix2,10)
PASSED: sum(mix1,3)
PASSED: sum(mix2,3)
PASSED: sum(descending,5)
PASSED: sum(descending,1)
--------------COPY_ELEMENTS--------------
PASSED: arrayToString(primes,10)
PASSED: arrayToString(mix1,10)
PASSED: arrayToString(mix1,10)
PASSED: arrayToString(mix2,10)
PASSED: arrayToString(mix1,10)
PASSED: arrayToString(mix2,10)
--------------COPY_ODD_ONLY--------------
PASSED: copyOddOnly(a,descending,5)
PASSED: arrayToString(descending,5)
PASSED: arrayToString(a,3)
PASSED: copyOddOnly(a,mix2,10)
PASSED: arrayToString(mix2,10)
PASSED: arrayToString(a,5)
--------------MULTIPLY_PAIRWISE--------------
PASSED: arrayToString(fiveThrees,5)
PASSED: arrayToString(descending,5)
PASSED: arrayToString(a,5)
PASSED: arrayToString(primes,5)
PASSED: arrayToString(descending,5)
PASSED: arrayToString(a,4)
PASSED: arrayToString(primes,7)
PASSED: arrayToString(a,7)
--------------CREATE_ARRAY--------------
PASSED: arrayToString(oneElem, 1)
PASSED: arrayToString(threeElems, 3)
PASSED: arrayToString(fiveElems, 5)
PASSED: arrayToString(oneElem, 1)
PASSED: arrayToString(threeElems, 3)
PASSED: arrayToString(fiveElems, 5)
-bash-4.2$
```

At that point, you are ready to try submitting on Gradescope.


## Step 6: Submitting via Gradescope

Go throught the same submit process you have in past labs. 

# Grading Rubric

Some of the points will be awarded based on Gradescope automatic grading. Other points will be assigned after visual code inspection by TAs.

## Rubric's automatic points

<table border="1">
<tr><th>Test Name</th><th>Value</th></tr>
<tr><td><p style="color:green;margin:0;padding:0;">indexOfMax</p></td><td>(10 pts)</td></tr>
<tr><td><p style="color:green;margin:0;padding:0;">indexOfMin</p></td><td>(10 pts)</td></tr>
<tr><td><p style="color:green;margin:0;padding:0;">largestValue</p></td><td>(10 pts)</td></tr>
<tr><td><p style="color:green;margin:0;padding:0;">smallestValue</p></td><td>(10 pts)</td></tr>
<tr><td><p style="color:green;margin:0;padding:0;">sum</p></td><td>(10 pts)</td></tr>
<tr><td><p style="color:green;margin:0;padding:0;">copyElements</p></td><td>(10 pts)</td></tr>
<tr><td><p style="color:green;margin:0;padding:0;">copyOddOnly</p></td><td>(10 pts)</td></tr>
<tr><td><p style="color:green;margin:0;padding:0;">multiplyPairwise</p></td><td>(10 pts)</td></tr>
<tr><td><p style="color:green;margin:0;padding:0;">createArray</p></td><td>(10 pts)</td></tr>
</table>

## Code inspection human-assigned points

* (10 pts) Code style, including but not limited to:
1. Code can be easily understood by humans familiar with C++ (including both the author(s) of the code, and non-authors of the code.)
2. Code is neatly indented and formatted, following standard code indentation practices for C++ as illustrated in either the textbook, or example code given in lectures and labs
3. Variable names choices are reasonable
4. Code is reasonably "DRY" (as in "don't repeat yourself")&mdash;where appropriate, common code is factored out into functions
5. Code is not unnecessarily or unreasonably complex when a simpler solution is available
6. Pre- and Post-conditions

## An important word about academic honesty and the Gradescope system

Make sure to actually solve the problem by writing the correct code -- you will NOT receive credit unless you write the correct functions that are able to work correctly on other inputs. We will test your code against other data files too&mdash;not just the default autograder tests that you are able to see.  

Any attempt to just "game the system" or use solutions that are not your own is a form of cheating, i.e. a form of "academic dishonesty".  Submitting a program of this kind would be subject not only to a grade of 0, but to possible disciplinary penalties.    If there is <em>any</em> doubt about this fact, please ask your TA and/or your instructor for clarification.

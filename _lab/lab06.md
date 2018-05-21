---
layout: lab
num: lab06
ready: true
desc: "Advanced array lists and dynamic arrays"
assigned: 2018-05-15 09:00:00.00-8
due: 2018-05-21 23:59:00.00-7
---

# Goals of this lab

The goal of this lab is get more practice with iterating through arrays and dynamically allocating memory. Continue to practice code tracing to reason about your code. We request that you DO NOT ask the staff to debug your code. They have been specifically instructed not to debug for you, rather to guide in the process.

# Step by Step Instructions: PLEASE READ CAREFULLY!

## Step 1: Getting Started

1. Decide if you are working alone, or working in a pair. Pair programming is OPTIONAL for this lab.

2. If you are working as a pair, make sure that you submit as a pair on Gradescope at the end of the lab.  Choose who will be the first driver and who will start as navigator, and then remember to switch (at least once) during the lab.

3. Go to github and create a git repo for this lab following the naming convention specified in previous labs (this step carries style points, see our feedback on previous labs to understand what we are looking for). If you are working with a partner only one of you needs to create the repo.

4. If you are working with a partner and you are the one who created the github repo, add your partner as a collborator on the repo

5. Decide on initial navigator and driver.

6. Driver, log on to your CSIL account.

7. Open a terminal window and log into the correct machine.

8. Change into your CS 16 directory

Note: Remember to push your work to github at the end of EVERY work session. That way, both partners always have access to the latest version of the code even if the code is being developed on one partner's CoE account.



## Step 2: Obtaining the starter code

* Navigate to your cs16 directory and clone the git repository you created
```
git clone git@github.com:ucsb-cs16-s18-mirza/lab06_alily_jgaucho.git
```
* cd into this new directory
```
cd lab06_alily_jgaucho
```

* Copy the starter code by typing the following command:

```
cp /cs/faculty/dimirza/cs16/labs/lab06/* ./
```

Typing the list (ls) command should show you the following files in your current directory

```
[dimirza@csil-03 lab06-startercode]$ ls
arrayFuncs.cpp  Makefile            README.md
arrayFuncs.h    moreArrayFuncs.cpp  tddFuncs.cpp
mafTest.cpp     moreArrayFuncs.h    tddFuncs.h
[dimirza@csil-03 lab06-startercode]$

```


## Step 3: Reviewing the files and what your tasks are

Here is a list of your tasks for this lab:

### Step 3a: Familiarize yourself with the big picture

Type "make tests" and you will see some tests pass, but some fail.

You are finished when all the tests pass.

There is only one file that you need to edit this week: 

* <code>moreArrayFuncs.cpp</code> contains more functions that deal with arrays.  These are in addition to the arrayFuncs.cpp that you worked with before in lab04.


### Step 3b: Work on the array functions

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

Each one has a set of tests which can be found under its corresponding heading when you type <code>make tests</code>. For example, the indexOfMax tests look like this to start: 

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

You should replace each function stub with the correct code for the function until all of the tests for each one pass. It is recommended that you work on the functions one at a time in the order that they are presented above. That is, get all the tests to pass for indexOfMax then indexOfMin and so on. When all the tests pass, move on to the next step. 

## Step 4: Checking your work before submitting

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

At that point, you are ready to try submitting on gradescope.


## Step 5: Submitting via gradescope

Go throught the same submit process you have in past labs. Make sure you add your partner if you have one. 

# Grading Rubric

Some of the points will be awarded based on gradescope automatic grading. Other points will be assigned after visual code inspection by TAs.

## Submit.cs system automatic points

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

## An important word about academic honesty and the gradescope system

We will test your code against other data files too&mdash;not just these.  So while you might be able to pass the tests on gradescope now by just doing a hard-coded "cout" of the expected output, that will NOT receive credit.    

To be very clear, code like this will pass on gradescope, BUT REPRESENTS A FORM OF ACADEMIC DISHONESTY since it is an attempt to just "game the system", i.e. to get the tests to pass without really solving the problem.

I would hope this would be obvious, but I have to say it so that there is no ambiguity: hard coding your output is a form of cheating, i.e. a form of "academic dishonesty".  Submitting a program of this kind would be subject not only to a reduced grade, but to possible disciplinary penalties.    If there is <em>any</em> doubt about this fact, please ask your TA and/or your instructor for clarification.

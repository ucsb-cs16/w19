---
layout: exam
num: e01a
ready: true
desc: "Practice Midterm Exam"
exam_date: 2016-07-07 09:30:00.00-7
---

<ol>

<li markdown="1" style="margin-bottom:8em;">
(50 pts) In the space below (and on the next page if needed) write the code forthe `IndexEntry` class according to the instructions on the
separate [handout](handout){:data-ajax="false} provided.

<p class="instructions" style="margin-top:40em; margin-bottom:0pt; padding-bottom:0pt;">There is more room on the next page for your answer if you run out of room here.<br /></p>

<div class="page-break-before">
<p class="instructions">Extra space for your answer to question 1</p>
</div>

</li>


<li markdown="1" class="page-break-before">

In CS16,24,32, for C/C++ programming, we used the <code>make</code> utility to streamline the process of compiling code. 

  <ol>
<li style="margin-bottom:3em" markdown="1">
(2 pts) What is the name of the utility we are using in this course instead of make, because it is more suitable for Java?
</li>
<li style="margin-bottom:3em" markdown="1">
(2 pts) With `make` we use a file called `Makefile` to control our
build.  What's the corresponding file called with the utility we
are using in this course?  
</li> 
<li style="margin-bottom:20em" markdown="1">
(8 pts) Within that utility, there are *tasks* and *targets*.   

Describe an example of a target that would contain more than one task.

Your description should contain:

* the name of the target you are describing
* the names of the two tasks it contains
* a brief description of the purpose of the target
* a brief description of the purpose of each of the two tasks.

You do not need to give the full XML syntax for the target, and the two
tasks. But if it will clarify your explanation, you may like to provide at least a general sense (perhaps with lots of bits left out) of how the target and task look in the XML code.

</li> 
</ol> 
</li>

<li markdown="1" class="page-break-before">

(10 pts) For each of the following indicate if the line of code
involves auto-boxing, and/or auto-unboxing.  If a line of code
involves both, check both boxes.  If it involves neither, check
neither box.  ASSUME THAT ALL THE LINES OF CODE ARE IN THE SAME `main`
METHOD, CONSECUTIVELY.

<p class="finePrint">(Grading: -2 for each incorrect answer, but no more than -10 total.)</p>

<table class="boxingTable">

<tr>
 <th width="60%">Code</th>
 <th width="10%">auto-boxing</th>
 <th width="10%">auto-unboxing</th>
</tr>

<tr>
<td markdown="1">
`ArrayList<Integer> mylist = new ArrayList<Integer>();`
</td>
<td class="checkbox">&square;</td><td class="checkbox">&square;</td>
</tr>

<tr>
<td markdown="1">
`mylist.add(new Integer(7));`
</td>
<td class="checkbox">&square;</td><td class="checkbox">&square;</td>
</tr>


<tr>
<td markdown="1">
`mylist.add(2);`
</td>
<td class="checkbox">&square;</td><td class="checkbox">&square;</td>
</tr>

<tr>
<td markdown="1">
`mylist.add(mylist.get(0));`
</td>
<td class="checkbox">&square;</td><td class="checkbox">&square;</td>
</tr>

<tr>
<td markdown="1">
`Integer x = mylist.get(0);`
</td>
<td class="checkbox">&square;</td><td class="checkbox">&square;</td>
</tr>

<tr>
<td markdown="1">
`int y = mylist.get(1);`
</td>
<td class="checkbox">&square;</td><td class="checkbox">&square;</td>
</tr>

<tr>
 <td markdown="1">
`Integer z = mylist.get(mylist.get(1));`
</td>
<td class="checkbox">&square;</td><td class="checkbox">&square;</td>
</tr>

</table>

</li>


<li markdown="1" class="pageBreakBefore" style="margin-bottom:15em;">

(10 pts) Briefly describe the two main categories of exceptions in Java.

Be sure that your answer includes not only the names of the two kinds
of exceptions, but also the reason that there are two different
categories, and how they have to be treated differently.

Describe as if you were asked during a job interview.  You should
include enough detail so that the interviewer knows that you are very
familiar with exceptions in Java, but not so much that you are wasting
the interviewer's time.

</li>



<li style="margin-bottom:5em;" markdown="1"  class="page-break-before"> 
In lecture, we discussed the way that that Java compiler (or any 
compiler, for that matter) deals with the problem of turning Java code
into bytecodes that can be interpreted by the Java Virtual Machine.

We discussed that the first phase is often to turn a sequence of 
characters into a sequence of *tokens*.

Here is some Java code.   List what the first twelve tokens
in this code would be by filling in the blanks.

```java

for (int i=0; i<=p.getDegree(); i++) {
   System.out.println("coeff=" + p.get(i));
}
```

<div class="fill-in-blanks-table" markdown="1">

| 1: | 2: | 3: | 4: |
|----|----|----|----|
| 5: | 6: | 7: | 8: |
| 9: | 10:| 11:| 12 |

</div><!-- space box -->

<p class="finePrint">Grader: -1 for each incorrect answer, minimum grade of 0. </p>

</li>


<li markdown="1"  style="margin-bottom:3em;">

(4 pts) Assume that the following line of code appears inside a java `main()` method.

```java
    Dog [] pets = new Dog[7];
```

One, and only one of the following is a *completely* true statement?   Which one?  (Note that the others may be a mix of true and false statements.)
 
<ol class="shuffle">

<li markdown="1">
 `pets` is a local variable on the stack that refers
 to an `Array` object. This is an array of seven `Dog` objects,
 `pets[0]` through `pets[6]` each of which is allocated on the
 heap. This statement is not legal if the Dog class does not contain a
 default constructor.
</li>

<li markdown="1">
 `pets` is a local variable on the stack that refers
  to an `Array` object. That array object is on the heap. The array
  object contains seven `Dog` references `pets[0]` through `pets[6]`,
  each of which is initially `null`. No `Dog` objects are created by
  this statement. 
</li> 
</ol>

</li>


<li markdown="1" style="margin-bottom:16em;" class="page-break-before">
(4 pts) Write a line of Java code that declares a variable `p` that is NOT of a reference type.
</li>


<li markdown="1" style="margin-bottom:16em;">
 (2 pts) Write a line of Java code that declares a variable `q` that is NOT of a primitive type.
</li>

<li style="margin-bottom:16em;" markdown="1"> 

(4 pts) Under what conditions does the compiler create a no-arg constructor for you? 

</li>

<li style="margin-bottom:16em;" markdown="1"> 

(4 pts) Under what conditions does the compiler NOT create a no-arg constructor for you? 

</li>

</ol>


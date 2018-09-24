---
layout: default
num: e01
---

# Notes on CS56 M16 E01

These are notes for the instructor to go over after the exam
is returned to the students.  These are various issues that
the instructor and TAs found while grading the exams.

# Question 1

# Question 2

# Question 3

# Question 4

# Question 5

# Question 6

On question 6, the wording of the question said:

>    If an object is still not eligible for garbage collection when the
>    last line of main is reached, write "never".  Your answer should be
>    one of the line numbers that appears in comments in main (e.g. 
>    `/* 3 */` or `/* 7 */`) or the word "never".

As it turns out, this was perhaps not the best wording to use.

If we consider, for example, (b) `Rover`, that object is still referred to
by `d6` as the time that line `/* 15 */` is reached.

Since `d6` is in fact a local variable on the stack, when line 15 is reached,
`d6` is no longer a live variable, and since this was the last live
reference to the `Rover` object, the correct answer to (b) should be
`15`.

Because of the way the question was worded, we accepted `never` for
full credit.  However, what I should have said was: if an object may 
still be live when line 15 is reached, write "never".  That would
cover the case of objects still reachable from static data members
of classes, such as the `dogOfTheWeek` reference.  

*That* was my intention for the "never" answer, but my choice of words
may have resulted in some misunderstanding.  We resolve this matter in
the student's favor.  (Thanks to Hiranya for raising the issue. )
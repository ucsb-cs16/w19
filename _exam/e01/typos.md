---
layout: default
num: e01
---

# Typo corrections for {{site.qtr}} exam {{page.num}}

On the yellow handout, p.2., line 3 is incorrect:

WRONG: `Dog d3 = d6;     /* 3 */` <br>
CORRECT: `Dog d6 = d3;   /* 3 /`

On the yellow handout p. 1, there is an inconsistency in the examples for the toString() function.  I will therefore accept either answer as correct.   Specifically, the inconsistency is between: <br>
`Boeing 747-400 (744) (Capacity: 374 )` <br> and
`Bombardier CRJ-200 V1 (Capacity: 50)` in terms of whether there is a space before the final `)`

# Clarifications and Hints

Question 1: You have a choice: you can design for an unlimited number of Cabins per Aircraft, or 
you can set a maximum (e.g. 4, or 10).   

If you DO choose to set a maximum, that MUST be declared as a
constant, and the actual number should appear in only one place in your code.   Do that in whatever
way is appropriate in Java.

For Question 2: java.lang.Integer has these constructors only:

|`Integer(int value)` | Constructs a newly allocated Integer object that represents the specified int value. |
| `Integer(String s)` |  Constructs a newly allocated Integer object that represents the int value indicated by the String parameter. |

---
layout: default
num: e02
---

<b>Typo corrections and hints for {{site.qtr}} exam {{page.num}}</b>

<b>On handout "A", p. 1, (blue sheet):</b> The descriptions of `compare` and `compareTo` are reversed from what they should be.  That is:

*    The description given for `compare` is actually the description for `compareTo`
*    The description given for `compareTo` is actually the description for `compare`

<b>In Question 4:</b> The *whole method*, not just the function prototype.

<b> In questions 7,8,9: </b> Where you see `Comparator<ArrayList>`, CROSS IT OUT.  Write `Comparator<Student>` instead.

<b> In question 7:</b> My intention was to NOT allow Lambda functions for this particular problem.  But, since I didn't clearly signal my intent, I will accept a correct answer based on lambda functions.

<b>Question 9:</b> Minor typo: there are *three* things in the list of things to notice, not two.

Also, instead of `java.lang.Math.signum`, you may also use either of these methods of class `java.lang.Double`

* `static int	compare(double d1, double d2)`: Compares the two specified double values.
* `int	compareTo(Double anotherDouble)` : Compares two Double objects numerically.

Those work in the usual way for a `compare` and `compareTo` method.

<div style="display:none;">
http://ucsb-cs56-m16.github.io/exam/e02/typos/
</div>


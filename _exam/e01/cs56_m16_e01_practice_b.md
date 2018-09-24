---
layout: exam
num: e01b
ready: true
desc: "Practice Midterm Exam 'B' "
exam_date: 2016-07-07 09:30:00.00-7
---

Note: This is not a "complete" 100 point practice exam.  This is a place I'll put additional example problems as I encounter them
between now and the exam on Thursday.

[For a full 100 point practice exam, click here.](/exam/e01/cs56_m16_e01_practice/){:data-ajax="false"}.

<ol>

<li markdown="1" style="margin-bottom:8em;">

(20 pts) For practice exam purposes: This exercise is a variation on the exercise on p. 266 in HFJ.  The answer to that one appears in the book, so I suggest you try that one first, then check your answer before attempting this problem.

On the [handout](handout) there is some code.    Your job: figure out after which line of main() each of the following objects is eligible for garbage collection. 

If an object is still not eligible for garbage collection when the last line of main is reached, write "never".    Your answer should be one of the line numbers that appears in comments in main (e.g. `/* 3 */` or `/* 7 */`) or the word "never".

<style>
 .fill-in-blanks-smaller table {
   width: 60%;
 }
 .fill-in-blanks-smaller table * td {
    margin: 1em 1em 1em 1em;
    padding: 1em 2em 2em 2em;
 }
</style>
<div class="fill-in-blanks-smaller" markdown="1">

| Object         | Fill in line  here |
|----------------|--------------------|
| (a) `Fido`     |                    |
| (b) `Rover`    |                    |
| (c) `Princess` |                    |
| (d) `Spot`     |                    |
| (e) `Snoopy`   |                    |

</div>

</li>


<li markdown="1" class="page-break-before">  (Problem 12 from CS56 W12 Midterm 2) For this question, you need the additional  [handout](handout) with code for these files: `Book.java`, `Product.java`, `Shippable.java`, `Song.java`.

You may assume that all of the code for Question 2 on the  [handout](handout) compiles—I've checked that this is true. Now consider the code for the `Q2` class below, which does contain some errors, and as a result, will NOT compile.

Please do these things with this "broken" code for the Q2 class:

<ol>
<li markdown="1">

(10 pts) Several lines need to be eliminated from this file in order to make it compile. Find the lines that are bogus, and draw a line through each of them in the code listing above.
Hint: By "several", I mean more than 2, and fewer than 10. Start by determining which, if any, of the constructors are bogus. Then, eliminate any lines that refer to the variables created on those lines. Finally, check all of the remaining method calls.

You will lose two points each time you striking a line that is not bogus, and you will lose two points for failing to strike any line that IS bogus. So, choose wisely.

```java
/* 1*/	public class Q2 {
/* 2*/	  public static void main (String [] args) {
/* 3*/	    
/* 4*/      Book gp = new Book("Pratchett","Going Postal",799,0.15);
/* 5*/      Song br = new Song("Lady Gaga","Bad Romance");
/* 6*/      Product slts = new Song("Nirvana","Smells Like Teen Spirit",79);
/* 7*/      Shippable hp = new Book("Rowling","Harry Potter & the Polymorphic Polyp",652,1.5);
/* 8*/      Shippable ttc = new Shippable("Dickens","Tale of Two Cities",999,1.5);
/* 9*/ 					       
/*10*/      System.out.println("a:" + gp.getTitle());
/*11*/      System.out.println("b:" + br.getArtist());
/*12*/      System.out.println("c:" + br.getPrice());
/*13*/      System.out.println("d:" + slts.getPrice());
/*14*/      System.out.println("e:" + slts.getTitle());
/*15*/      System.out.println("f:" + hp.getPrice());
/*16*/      System.out.println("g:" + hp.getWeight());
/*17*/      System.out.println("h:" + hp.getTitle());
/*18*/      System.out.println("i:" + ttc.getPrice());
/*19*/      System.out.println("j:" + ttc.getPrice());
/*20*/ 
/*21*/    } // main method
/*22*/ } // class Q2

```

</li>

<li markdown="1" style="margin-bottom:10em;">

(10 pts) After striking through the bogus lines, the remaining code should compile and run. So, indicate what the output will be (if any) below. Be precise. If there will no output, write "no output".

</li>

</ol>

</li>

</ol>

<div style="display:none;">
http://ucsb-cs56-m16.github.io/exam/e01/cs56_m16_e01_practice_b/
</div>

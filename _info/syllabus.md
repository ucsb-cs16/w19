---
title: "Syllabus"
layout: default
ready: true
---

# Syllabus <a name="top"></a>

This document and others linked within it should be your PRIMARY source for understanding the expectations of this course. Be sure to read it *carefully*.
You must contact the instructor for clarification if you receive information from any another source that is in contradiction to what is provided below.


## Course Title: 	Problem Solving with Computers I

## Description
Fundamental building blocks for solving problems using computers. Topics include basic computer organization and programming constructs: memory CPU, binary arithmetic, variables, expressions, statements, conditionals, iteration, functions, parameters, recursion, primitive and composite data types, and basic operating system and debugging tools.

## Prerequisites
Mathematics 3A or 2A with a grade of C or better (may be taken concurrently), CS 8 or Engineering 3 with a grade of C or better, or significant prior programming experience.

## Materials & Resources

**Textbook** is available for purchase at the UCSB Bookstore (department: CMPSC): <http://www.ucsbstuff.com/SelectTermDept.aspx>

    Textbook: Problem Solving with C++
    Author: Walter Savitch
    Edition: 9th (2015) or 10TH (2018)
    ISBN:   9780133591743 (2015) / 9780134448282 (2018)


The computing platform for this course is Fedora and is hosted on the CSIL machines. Students find it convenient to use their own computer for the course. If you do not have adequate access to a personal computer, we encourage you to use the College of Engineering CSIL Labs. More information not he following pages:
[Instructional Labs](https://doc.engr.ucsb.edu/display/EPK/Instructional+Labs) and [Where are the ECI Labs?](https://doc.engr.ucsb.edu/pages/viewpage.action?pageId=3342535)

	* Computer Science Teaching Lab (cstl)  in Phelps 3525   (cstl-00  through cstl-35)
	* Computer Science Instructional Lab (csil) in Harold Frank Hall 1138  (csil-01 through csil-48)
	* Virtual machine:  csil.cs.ucsb.edu


## Support

You are not alone in this course; the teaching staff are here to support you as you learn the material. It is expected that some aspects of the course will take time to master, and the best way to master challenging material is to ask questions. For online questions, use [Piazza](https://piazza.com/class). We will also hold office hours and open lab hours for in-person discussions. See more information [here](https://ucsb-cs16.github.io/w19/info/openlab).

## Diversity and Inclusiveness

I strive to create an environment in which students from diverse backgrounds and perspectives can be well-served in this course, where students' learning needs can be addressed both in and out of class, and where the diversity that the students bring to this class is viewed as a resource, strength, and benefit. It is my intent to present materials and activities that are respectful of diversity: gender identity, sexuality, disability, age, socioeconomic status, ethnicity, race, nationality, religion, and culture. Your suggestions are encouraged and appreciated. Please let me know ways to improve the effectiveness of the course for you personally, or for other students or student groups.

I (like many people) am still in the process of learning about diverse perspectives and identities. If something was said in class (by anyone) that made you feel uncomfortable, please, don't hesitate to talk to me about it. Help me create a welcoming, inclusive atmosphere that supports a diversity of thoughts, perspectives and experiences, and honors your identities (including gender identity and expression, sexual orientation, disability, neuro(a)typicality, physical appearance, age, race, socioeconomic status, ethnicity, nationality, culture, or religion (or lack thereof)).

(Inspired by and adopted from [Mine Çetinkaya-Rundel](http://www2.stat.duke.edu/courses/Spring18/Sta199) and [Hacker Hours](https://hackerhours.org/policies.html)).


## Disabled Students Program (DSP)

UCSB provides academic accommodations to students with disabilities. Students with disabilities are responsible for ensuring that the Disabled Students Program (DSP) is aware of their disabilities and for providing DSP with appropriate documentation. DSP is located at 2120 Student Resource Building and serves as the campus liaison regarding issues and regulations related to students with disabilities. The DSP staff works in an advisory capacity with a variety of campus departments to ensure that equal access is provided to all disabled students. If you have a disability that requires accommodation in this class, please go see the DSP very early on in the quarter. I will only honor these types of requests for accommodation via the DSP. More information about the DSP is found here: <http://dsp.sa.ucsb.edu>

[Back to Top](#top){: data-ajax="false"}

## What this course is about <a name="about"></a>

**This course is the first in a three course sequence, CS16-24-32 that provides a foundation in data structures and algorithms for deeper study of Computer Science.**

This is **not** an introductory programming course.  This is an **intermediate** programming course.


### What you need BEFORE you take this course

This course will present C++ from the beginning; no prior knowledge of C++ is assumed.  However, it IS assumed that you already have successfully completed CMPSC 8, or have an equivalent background in programming.  You should be comfortable with all of the following:

<table border="1" cellspacing="1" cellpadding="1" id="topicTable">
  <tr>
    <td><ul>
      <li>Problem solving
        <ul>
            <li>breaking down a problem into a sequence of steps</li>
          <li>abstracting specific problems into general ones<br />
            and finding general solutions</li>
        </ul>
      </li>
      <li>Memory concepts
        <ul>
            <li>variables, primitive vs. reference variables, name, type, value</li>
          <li>assignment statements</li>
          <li>scope of variables</li>
        </ul>
      </li>
      <li>Control structures
        <ul>
            <li>for loops, if/else, while loops</li>
        </ul>
      </li>
      <li>Arrays (or a similar data structure, e.g. Lists in Python)
        <ul>
            <li>index vs. value, finding sum, min, max, average, count of elements matching some condition, making a new list of elements containing only those that match some condition</li>
        </ul>
      </li>
    </ul>    </td>
    <td><ul class="style11">
      <li>Functions
        <ul>
            <li>function call vs. function definition</li>
          <li>formal vs. actual parameters (arguments)</li>
        </ul>
      </li>
      <li>Testing
        <ul>
            <li>How to test your code</li>
        </ul>
      </li>
      <li>Input/output concepts
        <ul>
            <li>Writing to the terminal</li>
          <li>Reading from the keyboard</li>
          <li>Reading and writing to files</li>
          <li>Neatly formatting output</li>
        </ul>
      </li>
      <li>Program style
        <ul>
            <li>How to write code that other people can read and understand</li>
        </ul>
      </li>
    </ul>    </td>
  </tr>
</table>



### What you should have learned by the end of this course to be ready for CS24

Here's the list of just a few things you'll need to know to be ready for CS24 (the next programming course).  You'll have the opportunity to learn all of these things (though not necessarily in this order).

* A few of the basic data types of C++, including at least `int`, `double`, `char`, `bool`, `string`
* The basic control structures of C++ (if/else, while, for, etc.)
* Defining functions in C++, and passing parameters to functions in three different ways (by value, by pointer, and by reference)
* Scope and lifetime of variables in C++
* The use of `const` with parameters to functions
* Using arrays in C++, and C-strings (null-terminated character arrays)
* How arrays are passed to functions, and the relationship between arrays and pointers
* Defining and working with structs in C++
* Using structs to create singly-linked lists where the space for the list nodes is allocated on the heap
* The difference between space allocated on the stack (e.g., local variables) and space allocated on the heap (with the `new` and `delete` operators)
* Converting from binary to decimal, octal, and hex, and back again&mdash;and how this relates to how C++ programs store various kinds of data in memory.
* The basic principles of recursion, and some idea of when a recursive solution is appropriate.


#### The swimming/guitar/painting analogy
You cannot learn to swim, play guitar, or paint from a textbook or a lecture. You can only:
* learn to swim by spending many hours in the pool,
* learn to play guitar by spending many hours playing the instrument,
* learn to paint by spending many hours putting brush to canvas.


The same is true of programming. Programming is not a series of facts to be memorized—you cannot &quot;cram&quot; for a computer science exam. You must practice, practice, practice. Here are some additional tips on what you can do instead of cramming: [Why You Cram for Exams (and How to Stop)](https://www.scotthyoung.com/blog/2018/12/24/why-cram) and [How to Enjoy Studying](https://www.scotthyoung.com/blog/2018/11/23/enjoy-studying).


[Back to Top](#top){: data-ajax="false"}


# Course policies <a name="policies"></a>

## Disclaimer

The rest of this page details the policies that will be enforced in the Winter 2019 offering of this course. These policies are subject to change throughout the remainder of the course, at the judgement of the course staff (with a potential announcement on Piazza).


# Grading <a name="grading"></a>

## Grade breakdown by evaluation component
Grades will be assigned using the following weighted components:
* Quizzes and participation: 2%
* Homeworks: 8%
* Lab assignments: 30%
* Midterm Exams: 30%
* Final Examination : 30%

This course moves quickly. So attendance is very important. We’ll sometimes cover two or even three chapters in a given week. We need to go at that pace, because during the last week of the quarter, you can’t really start anything new, because there isn’t time to put it into practice with programming assignments. If you don’t put it into practice, you aren’t very likely to learn it in any way that is going to stick with you.


## Graded components <a name="moreabout"></a>

There are six components to this course, each of which has a special job to do:
<ul>
  <li><strong>(1) Reading</strong>—Between each class, you'll have reading to do in the textbook. There is too much information you need to learn in this course for you to get all of it in lecture, so the readings are essential. The reading assignments can be found in each homework assignment. Occasionally, we might have brief, **in-class quizzes** to augment the homeworks. If you are tardy or are not present during the lecture, it will count as a zero for that quiz. In lieu of makeup quizzes, the lowest two quiz scores will be dropped (i.e., if you miss a quiz, you'll receive a 0, and it will be one of the scores that will be dropped). <br />
    <br />
  </li>
  <li><strong>(2) Homework (lowest *two* are dropped)</strong> <br /> 
  Homeworks are typically submitted online individually. The homeworks are practice for the exams. Each student must submit each homework independently, but are allowed to discuss problems with the course staff *only*. These are typically pencil/paper type problems, though sometimes you'll need access to a computer to solve them. If you don't have reliable access to a computer at home (or in your dorm), please plan your schedule so that you can spend time in the CSIL computer lab between classes.<br />
    <br />
    Homework assignments can be completed on paper (print the homework, fill it out, and then digitize it) or electronically (print the homework to PDF, fill it out by additing text or "writing" on the PDF). If you miss submitting your homework by the deadline, it will count as a missed homework (the lowest scorest will be dropped). Please do not submit it to the instructor in class or office hours. You may not have someone else turn in your homework for you (that will be considered academic dishonesty).<br />
    <br />
  </li>

  <li><strong>(3) Programming Assignments (Labs) (lowest score is dropped)</strong>—Programming assignments (also called labs) are given once a week. Weekly labs are a required part of the course. You can work on them during the lab session, especially, since you can easily ask for help during that time. We do not expect you to complete the entire assignment during that time, so you can finish them on your own time outside of lab. You must however, read the assignment and attempt the parts that you can do with little assistance as soon as the assignment is released. The assumption is that you at the very least read the assignment *before coming to your section*. Labs will typically involve pair programming, which is described later in this syllabus.<br />
	We will be taking attendance during labs. **It is your responsibility to make sure that you sign the attendance sheet**. Even if you are present in the lab but did not sign-in, you will receive a 0 for the attendance for that lab. Signing-in for another person is considered as a violation of academic integrity (i.e., cheating) and are grounds for receiving a 0 for that entire lab. To accommodate unforseen circumstances, you have one “sick-day/personal day” per student, per quarter: this means that missing a lab just once during the entire quarter will nto affect your grade.
    <br />
  </li>
  <li><strong>(4) Lectures</strong>—Learning is something that you do as a student, not something that is &quot;done to you&quot; by a teacher. Therefore, most of the learning you will do in this course takes place when you are actively involved in doing something challenging, i.e., during the homework assignments and labs. Most of the information you will need to do those assignments will come from the reading and the in-class discussions. <br />
    <br />
    Therefore, you may ask, what is the purpose of the lectures?<br />
      <br />
      The purpose of the lectures in this course is to guide you through the readings, homeworks, and labs:
        <ul>
          <li>to provide an overview of how everything fits together</li>
          <li>to provide hands-on demonstrations of things you'll do on your own later</li>
          <li>to provide additional information that is not in the textbook</li>
          <li>to provide additional explanations about things in the text that might not be clear</li>
          <li>to provide an opportunity to ask questions, and hear answers to questions asked by others.<br />  
            <br />
          </li>
        </ul>
  </li>

<li><strong>(5) Participation</strong>&mdash;Lectures are designed to be interactive, so come prepared with questions. Additionally, participating by answering or clarifying questions on Piazza is highly encouraged. Pair programming is another way that you are participating in this course. I expect everyone to be reliable, prepared to work and to follow the proper pair-programming rules. Disrepectful, unprofessional, and otherwise inappropriate behavior can be grounds for receivng a zero for participation in this course. 
    <br />
    <br />
</li>

<li><strong>(6) Exams</strong>&mdash;There are three exams in this course— two midterms and a final. Unless you have accommodations as determined by the university and approved by the instructor, you must take the midterms and the final at the dates and times provided on the course calendar. **No Makeup Exam** will be given for the final exam. Please check your course schedule and make sure that you have no conflicts with these exams. If you have a conflict with either exam, please post a private note on Piazza visible to Instructors before the end of the **second week of classes**.</li>

</ul>


## Late Submission

**Late submissions will not be accepted**. The same goes for homework, unless you have relevant DSP accommodations that provide a two-day extension on homework assignments and you contact the instructor *before* the assignment is due.
The policy is based on the idea that the primary purpose of the deadlines is to allow the graders to manage their workload: all labs must be graded in one sitting, or they just won’t be able to keep up with the workload.

In lieu of offering exceptions or extensions, your lowest two homework scores and your lowest lab score will be dropped in the calculation of your overall grade.

Reminder: If you are registered for another UCSB course that overlaps with this one, you MUST HAVE specific written permission from both instructors, or I am within my rights to give you a failing grade on any work you miss as a result, and will NOT make any accommodations for you. This includes exams.

If you miss a class, you miss the opportunity for the points on the in-class activity. Period.


### Excused absense

**There is no make-up**, except for excused absences that are arranged with and agreed to by the instructor **in advance**, for official UCSB activities.

In rare cases, if there is a documented family emergency, documented extended illness, documented required court appearance, or other situation beyond the students' control (with documentation) the instructor may extend an assignment deadline, entirely at the instructor's discretion—but this is **not** a guarantee or a right.


## Grade assignment policy
<table border="1" cellspacing="3" cellpadding="2">
  <tr>
    <td>A/A+</td>
    <td>97-100</td>
    <td>A</td>
    <td>93-97</td>
    <td>A-</td>
    <td>90-93</td>
  </tr>
  <tr>
    <td>B+</td>
    <td>87-90</td>
    <td>B</td>
    <td>83-87</td>
    <td>B-</td>
    <td>80-83</td>
  </tr>
  <tr>
    <td>C+</td>
    <td>77-80</td>
    <td>C</td>
    <td>73-77</td>
    <td>C-</td>
    <td>70-73</td>

  </tr>
  <tr>
    <td>D+</td>
    <td>67-70</td>
    <td>D</td>
    <td>63-67</td>
    <td>D-</td>
    <td>60-63</td>

  </tr>
    <td>F</td>
    <td>Below 60</td>

</table>
<p><strong>Curving: </strong>The grade  scale above represents the <em>minimum</em> letter grade you will be assigned&#8212;at the instructor's discretion, the grading scale  may be altered <em>in the students' favor</em> if this will better reflect the students' mastery of the material. Thus, <em>if</em> there is a &quot;curve&quot;, it will be applied at the <em>end</em>, not to individual assignments.</p>
<p><strong>A+ grades: </strong>These may be awarded to the very best performing students in the class—but the cutoff for A+ grades will be determined at the end of the course at the discretion of the instructor (there is no pre-determined cutoff---an average of 97 or more doesn't guarantee you an A+ grade.)</p>

<p><strong><em>Everything</em> is cumulative—that's just how CS is.</strong></p>
<p>Finally—note that just as in a math class, everything we do builds on all the work that came before. So, <em>everything</em> is <em>cumulative</em>—so, you can't afford to miss any classes unless absolutely necessary. Miss two lectures in a 10-week two-lecture per week course, and you've already skipped exactly 10% of the course&mdash;it wouldn't be surprising if your performance (i.e., final grade) in the course dipped by a similar amount.</p>

[Back to Top](#top){: data-ajax="false"}

# About Collaboration

One of the things we really want to convey in this course is that real-world software development is very seldom an 'individual sport'—it is much more often a 'team sport'. Companies want to hire CS and CE graduates that know how to collaborate with others on producing software.

In the CS Department at UCSB, we understand the value of this. We want to encourage working together in ways that help you develop your skills and teamwork, and help you understand that programming can be a social, collaborative, creative activity. The sooner you start with activities such as pair programming, code reviews, and other collaborative software development activities, the more skill you'll develop, and the sooner you'll be ready for the real world. Plus, for many people, working together with others is a lot more enjoyable and fun.

We do, however, need to avoid any situations where freeloaders are "coasting" through courses by leaning too much on others and never developing independent skills as programmers. This situation creates huge problems. Mostly it is damaging to the freeloaders themselves, who eventually crash and burn, perhaps, not just on exams but also later in their careers. 

Our emphasis on collaboration means:
* We will try to create opportunities for you to work in pairs on assignments—in some cases, we may even require it.
* We will try to create opportunities for you to develop the ability to think critically about software development by talking about and reflecting on your own code within your group
* Some in-class assignments will permit discussion with other students.

However:

*    You may not use homework or code from others and claim it as your own work.
*    You may not work together on assignments, unless you've been specifically told that it is allowed.
*    You may not directly share your solutions or completed work with others.

Make a serious attempt at the assignment yourself, and then discuss your doubts with others. In this way you, and they, will get more out of the discussion (not solution-sharing).
If you are not sure about whether some kind of collaboration is permitted or not, it is your responsibility to **verify with the instructor** and ask questions.

The emphasis on collaboration in this course does not necessarily extend to other CS courses you may take in the future.

*    Each course will have its own policies, and the default policy is still: **no collaboration**.
*    Collaboration is only permitted when specifically allowed for—otherwise, you must do your own work.
*    Please be sure you understand each instructor's policy on collaboration carefully, and don't assume it will be the same as that from previous courses.
*    And, finally, be sure to review the UCSB Academic Honesty Policy. You should read and understand the UCSB policy on academic honesty listed below. You should also understand that I take academic honesty and personal integrity very seriously, and will do my best to uphold and enforce this UCSB policy.

### About pair programming

Most of the programming work in this course will be done using a style of programming known as "pair programming". This is where two people (in rare cases, three) work together at the same terminal to solve a programming problem.

It is similar, in some ways, to having a "lab partner" in a Biology, Chemistry or Physics course. One student is the "driver", who controls the keyboard and mouse. The other is the "navigator", who observes, asks questions, suggests solutions, and thinks about slightly longer-term strategies. The two programmers switch roles about every 20 minutes. The resulting work of pair programming nearly always outshines that of the solitary programmer, with pairs producing **better code in less time**.

For the assignments where pair programming is used, it is required, not optional. In addition to pair programming is a real-world skill that is highly valued by employers, there is also evidence in the scientific literature that it improves student learning and, thus, helps you get better grades.

To learn the "do’s and don'ts" of pair programming and to see pairs in action, view this entertaining video (it takes less than 10 minutes):
<http://bit.ly/pair-programming-video>

[More guidelines for pair programming.](/w19/info/pair-programming)

The most important rule of pair programming is that you must **work together, co-located, on the same part of the assignment at the same time**. Splitting up the work on an assignment is considered cheating.


## UCSB Policy on Academic Honesty<a name="AH"></a>

It is expected that students attending the University of California understand and subscribe to the ideal of academic integrity, and are willing to bear individual responsibility for their work. Any work (written or otherwise) submitted to fulfill an academic requirement must represent a student’s original work. Any act of academic dishonesty, such as cheating or plagiarism, will subject a person to University disciplinary action. Using or attempting to use materials, information, study aids, or commercial "research" services not authorized by the instructor of the course constitutes cheating. Representing the words, ideas, or concepts of another person without appropriate attribution is plagiarism. Whenever another person’s written work is utilized, whether it be a single phrase or longer, quotation marks must be used and sources cited. Paraphrasing another’s work, i.e., borrowing the ideas or concepts and putting them into one's "own" words, must also be acknowledged. Although a person's state of mind and intention will be considered in determining the University response to an act of academic dishonesty, this in no way lessens the responsibility of the student.

<em>(Section A.2 from: <http://www.sa.ucsb.edu/Regulations/student_conduct.aspx>,  Student Conduct, General Standards of Conduct)</em>

Each student is responsible for knowing and abiding by UCSB's policies on Academic Honesty. Any student violating these policies will earn an 'F' in the course and will be reported to the Academic Integrity Office. Committing acts that violate Student Conduct policies that result in course disruption are cause for suspension or dismissal from UCSB. The Office of Judicial Affairs has policies, tips, and resources for proper citation use, recognizing actions considered to be cheating or other forms of academic theft, and students’ responsibilities, available on their website at: <http://judicialaffairs.sa.ucsb.edu>.

<br />

Rather than copying someone else's work, ask for help. You are not alone in this course! The course staff is here to help you succeed. We expect that you will work with integrity and with respect for other members of the class, just as the course staff will work with integrity and with respect for you.

[Back to Top](#top){: data-ajax="false"}

Last major revision: Jan 15, 2019

---
title: "CS 16: Problem Solving with Computers -I , Spring 18, Mirza"
---

# CS 16: Problem Solving with Computers -I , Spring 18 

<!--{{site.course}}, {{site.quarter}}-->


<div id="info" data-role="collapsible" data-collapsed="false">
<h2>Course Information</h2>
<ul>
{% for item in site.info %}
<li><a href="{{item.url}}"  data-ajax="false">{{item.title }}</a></li>
{% endfor %}
</ul>
</div>

<div data-role="collapsible" data-collapsed="false">
<h2 id="lecture_notes">Lecture Notes and Slides:</h2>
{% include lecnot_table.html %}
</div>

<div data-role="collapsible" data-collapsed="false">
<h2 id="homework">Homework and quizzes:</h2>
{% include hwk_table.html %}
</div>

<div data-role="collapsible" data-collapsed="false">
<h2 id="labs">Labs:</h2>
{% include lab_table.html %}
</div>

<div data-role="collapsible" data-collapsed="false">
<h2 id="exams">Exams</h2>
{% include exam_table.html %}
</div>

[comment]: # %include exam_table.html %

<!-- 
</div>
-->

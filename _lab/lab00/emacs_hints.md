---
layout: topics
topic: "emacs hints"
desc: "Getting started if you've never used emacs before"
---

[Back](../)

If you want to use <b>emacs</b> to create and edit a new file (let's call it <b>hello.cpp</b>), then on a terminal, type:

```
$ emacs hello.cpp
```
Once emacs is open, you can start editing the file immediately. To move around, use <b>the arrow keys</b>.

<b>emacs</b> commands usually take the form <b>C-x C-c</b>. This means press and hold the <b>control</b> key while pressing the <b>x</b> key, then next press and hold the <b>control</b> key while pressing the <b>c</b> key. In contrast, the command <b>C-x 1</b> means press and hold the <b>control</b> and <b>x</b> keys, then release both and then press the <b>1</b> key.

Some useful commands are:
<ol><ul>
	<li><b>C-x C-c</b> closes emacs</li>
	<li><b>C-x C-s</b> saves the current file</li>
	<li><b>C-x 1</b> closes all other panes except the current one (you can use this close the help panel)</li>
	<li><b>C-g</b> at any point in a command will cancel the command</li>
	<li><b>C-k</b> "kills" or cuts the current line, and <b>C-y</b> "yanks" or pastes the line back at the cursor location</li>
</ul></ol>

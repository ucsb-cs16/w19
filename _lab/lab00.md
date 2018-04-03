---
layout: lab
num: lab00
ready: true
desc: "Getting started"
assigned: 2018-04-03 09:00:00.00-8
due: 2018-04-09 23:59:00.00-7
---

# Introduction


Your first lab for this week is an introduction to programming on CSIL and the tools you'll need for this course. The intended outcomes are:

* Help us get to know you 
* Learn about the tools you will be using in this class viz gradescope and github


This lab must be completed INDIVIDUALLY. In the subsequent labs you are encouraged to work with your programming partner.

# Tell us about yourself 

Please fill out the following form to tell us about yourself. We will use the information to pair you with your preferred programming partner or someone in the class with the similar skill levels as your self. Here is the link to the form:

[http://bit.ly/CS16-ic00-AboutYouForm](http://bit.ly/CS16-ic00-AboutYouForm)

Answer all the questions in the form to earn credit for this part (50 points). 


# Get setup with the tools for this course

## Create a CoE account if you don't have one already

We encourage you to complete all programming assignments by logging in to the machines in the Computer Science labs, or to connect remotely. To do this you will need a **College of Engineering account**. You can create an account online at <a href="https://accounts.engr.ucsb.edu/create" target="_blank">https://accounts.engr.ucsb.edu/create</a>.

If you are enrolled in <i>any</i> CoE course this quarter (including CS24), you can create your account immediately. If you are not, you will need to contact the ECI Help Desk at <a href="mailto:help@engineering.ucsb.edu">help@engineering.ucsb.edu</a>.

## Get setup with github

We will be using github.com in this course.   We have created an organization called ucsb-cs16-s18-mirza on github.com where you can create repositories (repos) for your assignments in this course.   The advantage of creating private repos under that organization is that the course staff (your instructors, TAs and mentors) will be able to see your code and provide you with help, without you having to do anything special.

To join this organization, you need to do three things.

1. If you don't already have a github.com account, create one on the "free" plan. Visit [www.github.com](www.github.com)

2. If you don't already have your @umail.ucsb.edu email address associated with your github.com account. go to "settings", add that email, and confirm that email address.

3. Visit our Github Sign Up Tool at [https://ucsb-cs-github-linker.herokuapp.com/](https://ucsb-cs-github-linker.herokuapp.com/), login with your github.com account, click "Home", find this course (CS16-S18-Mirza), and click the "join course button".   That will automatically send you an invitation to join the course organization on github. 

4. Accept the invitation that appears in your browser (from step 3) or log into your account on [www.github.com](www.github.com) to accept the invitation.

## Get setup with gradescope

We will use gradescope to grade all your homeworks, exams and lab/programming assignments. You should have received an email notification with instructions about logging into gradescope.

Log into our class site on [https://www.gradescope.com/](https://www.gradescope.com/): CS16 Spring 2018 and navigate to the lab00 assignment. Keep this page open to submit your code at the end of the lab

# Implement and submit a simple C++ program 

## Step 1: Open a Terminal and write a "Hello World" program 

The first step in every assignment will be to open a <b>terminal window</b>, which will be the environment you use to write, compile, and run your programs.


* If you are working on a machine in the Phelps 3525
    please see [Step 2a](#step2a){: data-ajax="false"} for further instructions.

* If you are working on a machine in the Computer Science Instruction Lab (CSIL), you'll be working on one of the following machines: `csil-01.cs.ucsb.edu`, `csil-02.cs.ucsb.edu`, etc.(though `csil-48.cs.ucsb.edu`).   Please see [Step 2a](#step2a){: data-ajax="false"} for further instructions.

If you are working on your laptop, whether Windows, Mac or Linux, the instructions below
will tell you how to connect to `csil.cs.ucsb.edu`. For now its okay to connect to that server, however in the future please connect to one of the following machines:

* `csil-01.cs.ucsb.edu`
* `csil-02.cs.ucsb.edu`, etc.
* etc.
* through `csil-48.cs.ucsb.edu`

You'll get much better performance on those individual machines, because they are much less heavily loaded and have newer hardware, as compared to `csil.cs.ucsb.edu`.

* If you are working on your laptop and it is a Mac or Linux machine, go to [Step 2b](#step2b){: data-ajax="false"}.

* If you are working on your laptop and it is a Windows machine, go to [Step 2c](#step2c){: data-ajax="false"}.


### Step 2a: Opening a Terminal on a Phelps or CSIL Lab Machine <a name="step2a"></a>


1. Log in to the machine using your CoE account credentials (i.e. your username and password) created in Step 1.

2. Find the <i>Activities</i> menu, which is in the top-left corner of the screen. Click on it to open the menu.

3. Next, type "shell" in the search box. Then click the "Terminal" application which appears.

4. You should now see a terminal window open. You can open more tabs or windows from the Terminal application's menu. Skip to Step 3 and read the other steps later when you attempt to log in remotely

### Step 2b: Connecting to CSIL via SSH on Mac OS X or Linux <a name="step2b"></a>

To get started on Mac OS X or Linux, you first need to open a terminal program. This involves slightly different steps on either OS.

* On Ubuntu (an example of a Linux OS):*

1. Find the search menu. It appears at the top of the Unity bar:

<img src="ubuntu-menu.png" width="297" alt="Ubuntu Search Menu" />

2. Click on that icon to open the search menu. Then type "terminal" and click on the "Terminal" application which appears:

<img  src="ubuntu-search.png" width="357" alt="Ubuntu Terminal Application" />


*On Mac OS X:*

1. Open the "Terminal" application. It is found inside the <em>Applications</em> folder of your main drive, inside the <em>Utilities</em> subfolder. The icon looks like this:

<img src="mac-terminal.png" width="79" alt="Mac OS X Terminal Icon" />

You can also find it using Spotlight by typing "terminal" and pressing ENTER.


Once you have a terminal window open on your machine, you next need to **connect to the CSIL server remotely**.

You will do this using a UNIX command (an internet protocol, really) called <em>SSH</em> (short for Secure Shell).

Type the following command in your terminal, replacing <b>USERNAME</b> with <b>your CoE username</b>:

```
$ ssh USERNAME@csil.cs.ucsb.edu
```

SSH will first ask you a question which looks like this:

```
The authenticity of host 'csil.cs.ucsb.edu (128.111.43.14)' can't be established.
RSA key fingerprint is 90:ab:6a:31:0b:81:62:25:9b:11:50:05:18:d3:1a:b5.
Are you sure you want to continue connecting (yes/no)?

```

Type <b>yes</b> and then ENTER to continue. It will next ask for your CoE account password. When you type it in, nothing will show on the screen (not even dots). However what you type is still being sent and once you are finished with your password, you can press ENTER to login.

<b>You should now be remotely connected to CSIL!</b> You can make sure by typing the following command (which will tell you what machine you are currently issuing commands to):

```
$ hostname

```

This should show <b>csil.cs.ucsb.edu</b>. You can now do anything you could normally do in a terminal window in CSIL or the Phelps lab (except run graphical programs).

## Extra Note: Graphical Forwarding

This is not required or necessary to use CSIL remotely, so if you are not interested, go ahead and skip this part.

If you have an X windows system installed you can get graphical applications running by <em>forwarding</em> X from CSIL to your machine. To do this, add the <b>-X</b> option to the SSH command like this:

```
$ ssh -X USERNAME@csil.cs.ucsb.edu
```

X windows is almost always installed on graphical Linux, and can be installed on Mac OS X as XQuartz (which can be found at <a href="http://xquartz.macosforge.org/landing/" target="_blank">http://xquartz.macosforge.org/landing/</a>).

### Step 2c: Connecting to CSIL via SSH on Windows with PuTTY <a name="step2c"></a>


To connect remotely on Windows machines, we recommend using a program called <em>PuTTY</em>. This program is a well-known and widely-used SSH client for the Windows OS.

First, download the program from <a href="http://www.chiark.greenend.org.uk/~sgtatham/putty/download.html" target="_blank">http://www.chiark.greenend.org.uk/~sgtatham/putty/download.html</a>. You only need the executable file <b>putty.exe</b>, but feel free to download any other programs that you want. The page includes portable versions and a version with an installer. <i>Always make sure to download PuTTY from this site</i>, so that you can make sure it is the correct program.

Once downloaded, run PuTTY like you would open other programs. If you just download the <b>putty.exe</b> file, you can open it from your downloads folder directly. You can also move it to any other location on your machine and open it from there. If you used the installer, open PuTTY from the Start Menu.

When PuTTY opens, you should see a window that looks like this:

<img src="putty-empty.png" width="469" alt="Empty PuTTY window" />

Type <b>csil.cs.ucsb.edu</b> into the box labeled "Host Name (or IP address)". Leave the "Port" setting at 22 and leave the "SSH" button checked. The window should now look like this:

<img src="putty-full.png" width="472" alt="Completed PuTTY window" />

Then click on the "Open" button to connect. PuTTY will then show a prompt which looks like this:

<img  src="putty-hostkey.png" width="433" alt="PuTTY Host Key Prompt" />

Click "Yes" to accept and have PuTTY remember CSIL's key.

Once a connection is made, CSIL will ask for both your username and then your password. Type in your CSIL username and password. The password will not be shown on the screen, but the characters you type are being used. This step will look something like this (with your username instead of "username"):

<img src="putty-login.png" width="677" alt="PuTTY Login Prompt" />

Once you have logged in successfully, you should be connected remotely to the CSIL server. Run the following command to make sure (this command shows the full host name of the machine you are logged in to):

```
$ hostname
```

This command should output <b>csil.cs.ucsb.edu</b>. You can now do anything in this terminal window that you could do on a CSIL machine or a Phelps lab machine, except run graphical applications.

If you want to run graphical applications, instead of using puTTY, you can use other programs, such as [MobaXterm](http://mobaxterm.mobatek.net/){: target="_blank"}.


## Step 3: Create cs16 and lab00 directories<a name="step3"></a>

Now that your environment is set up, you next will need to create a directory (a folder is also called <i>directory</i> in Linux) that will contain all your work for the course. Then, inside that directory, you will need to create another directory to contain your work for this assignment.

To create your CS16 directory, use the <b>mkdir</b> command. Type the following in the terminal and press enter:

```
$ mkdir cs16
```

The <b>$</b> represents the terminal prompt; <i>you won't type this character</i>. Whenever you see it, that means that the following command is intended to be typed into the terminal window and run by pressing enter.

You can see list of files and directories in the current directory with <b>ls</b> command. Type the following in the terminal and press enter:

```
$ ls
```

You should be able to see the directory you just created i.e. **cs16**

Now move into that new CS16 directory with the <b>cd</b> command as follows:

```
$ cd cs16
```

And create and move into a lab00 directory:

```
$ mkdir lab00
$ cd lab00   
```

At any time, you can check what directory you are current in with the command **pwd**. It will output the full path of the current directory. For example, if you are inside your <b>lab00</b> directory, you might see:

```
/cs/student/yourcsilname/cs16/lab00
```

Knowing how to navigate a UNIX environment and issue UNIX commands is VERY valuable to computer scientists and engineers. To learn more UNIX commands, there are lot of cool Web resources and books on the topic. This is one website I found that's a good introductory page: [Useful unix commands](http://mally.stanford.edu/~sr/computing/basic-unix.html)



## Step 4: Editing text files for programming <a name="step4"></a>

Let's take a little detour on how to best create and modify text files. These will carry all the code (regardless of computer language) that we want to assemble, compile, and execute.

You are surely all familiar with Microsoft Word as a widely-used "word processor", but please DO <b>NOT</b> USE MS WORD TO WRITE PROGRAMS!!! :)<br>
Instead, for programming, you have access to a very large number of excellent text editors - most of them are free to use! I will introduce you to just 4 of them below. If you already have a favorite editor and know how to use it well, then you don't have to change and use something else, just for this class.

In fact, <i>AND PLEASE NOTE THIS</i>, no one editor is necessarily "better" than another. It is a matter of your preference. This is a great time for you to explore multiple options and then pick one. Once you pick an editor of choice, STICK WITH IT!


As you progress in your Computer Science education and, subsequently, your careers in CS, make sure you end up learning how to use more than one editor. You can still have a "favorite" that you excel at using, but at least have a working familiarity with others.


1. <b>emacs</b> for UNIX-based OS

emacs is a very popular editor that's available on just about every UNIX machine (including the ones that you're using in the CS labs) and UNIX-based machines (like MacOS computers).

To run emacs on a UNIX machine or a MacOS machine, open up a terminal (see above for how to do that on Macs) and type:


	$ emacs


To edit a file (let's say it's called "filename"), you'd type:

	$ emacs <filename>

Go ahead and edit a file named "hello.cpp"

In the editor type a few comments on the first line as follows:
	
		// hello.cpp
		// Your name
		// Your perm number

Note that in C++, you can insert comments by preceding the comment with <code>//</code>

To save the file, press Ctrl-x, Ctrl-s. To exit emacs and return to the unix shell, press Ctrl-x, Ctrl-c

To learn how to use emacs, there is no substitute for PRACTICE!!! Of course, there are multiple online resources that you can look at (especially given emacs' popularity) and here are some of them:

* <a href="https://www.gnu.org/software/emacs/tour/" target="_blank">emacs tour from the GNU organization (makers of emacs)</a>

* <a href="https://www.gnu.org/software/emacs/refcards/pdf/refcard.pdf" target="_blank">emacs commands - a handy reference card</a>

* <a href="http://www.jesshamrick.com/2012/09/10/absolute-beginners-guide-to-emacs" target="_blank">a beginner's guide to emacs</a>


2. <b>vim</b> for UNIX-based OS

vim (or sometimes called vi) is another popular editor that's also available on just about every UNIX machine (including the ones that you're using in the CS labs) and UNIX-based machines (like MacOS computers).

To run vim on a UNIX machine or a MacOS machine, open up a terminal (see above for how to do that on Macs) and type:

	$ vim

To edit a file (let's say it's called "filename"), you'd type:

	$ vim <filename>

To customize your vim environment for a better coding experience with C/C++ copy this .vimrc file from the instructor folder to your home folder using the following command:

```
cp /cs/faculty/dimirza/cs16-wi17/labs/example_dotvimrc/.vimrc ~/
```

Again, to learn how to use vim, there is no substitute for PRACTICE!!! Again, there are multiple online resources that you can look at and here are some of them:

* <a href="http://www.vim.org/about.php" target="_blank">About vim</a>

* <a href="http://tnerual.eriogerg.free.fr/vimqrc.html" target="_blank">vim commands - a handy reference card</a>

* <a href="https://www.fprintf.net/vimCheatSheet.html" target="_blank">another reference cheat sheet for vim</a>

3. <b>Sublime Text 2</b> for Windows OS and MacOS X --- see <a href="https://www.sublimetext.com/" target="_blank">the product website</a> (it's a program that you'd have to download)

4. <b>Notepad++</b> for Windows OS --- see <a href="https://notepad-plus-plus.org/" target="_blank">the product website</a> (it's a program that you'd have to download)



## Step 5: Create and edit a file containing a C++ program <a name="step5"></a>

Now it's time to write the program! If you're comfortable with one of the reviewed text editors, then go ahead and use one. Otherwise, here are some [emacs hints](emacs_hints/) and some [vim hints](vim_hints/).

This assignment only needs you to write a program that prints out two lines on the display, and nothing else. <b>The output should look exactly as follows</b> (no space before or after each line, except the 2 newlines):

```
Hello, world!
I am ready for CS16!
```

Start with a "skeleton program" (or template) that contains the necessary structure but that does not do anything:

```cpp
#include <iostream>

using namespace std;

int main() {
    // Your printing code should go here

    return 0;
}
```
Go ahead and type this in to the **hello.cpp** file. Alternatively, you can copy and paste it directly from this page.

Next, you will need to replace the comment with code to print out the expected output. Comments in C++ are lines that start with <b>//</b> or text between <b>/*</b> and <b>*/</b>. The second type can span multiple lines.

Important note: For students familiar with Python, remember that lines starting with the <b>#</b> character are not comments in C++. Rather, they are important include lines that allow your program to use the input and output functionality. Make sure to copy those lines in your program as well. Only <b>//</b> or <b>/*</b> create comments in C++.

To print out text to the terminal, you can use the <b>cout</b> stream. To output something use the <b>&lt;&lt;</b> operator as shown below:</p>

```
cout << "This will be printed out to the terminal" << endl;
```
The <b>endl</b> command will cause a newline (i.e. a carriage return) to be printed and the next print to go on the next line.

You can adapt this line to achieve the objective of the assignment. <b>Remember that we need to print two lines, each with a newline at the end.</b> You can do this with one or two statements.


## Step 6: Compile the Code <a name="step6"></a>

Now that the code is written, we need to <em>compile</em> it. This will be done using a special program called a <em>compiler</em>.

Before moving on, <b>make sure you save your code</b> and close the text editor. The following step will be done in the terminal.

For C++ code we will use the <b>g++</b> compiler that's built-into many UNIX machines (it even works on most MacOS terminal programs). You can compile the <b>hello.cpp</b> file into an executable called <b>hello</b> with the following command:

	$ g++ -o hello hello.cpp

This will compile your code and make an executable version of it. Specifically, it will tell the compiler to take the source code file <b>hello.cpp</b> and compile and link it to an executable called <b>hello</b>.

If the compilation is successful, you won't see any output from the compiler, but if you issue a UNIX <b>ls</b> command, you should see a new file has appeared: one called <b>hello</b>. You can then use the following command to run your program:

	$ ./hello

Which means "in the current directory, as represented by the <b>.</b> character, run the program <b>hello</b>". You should then see the program output the two expected lines.

The other possibility is that the program may <b>not compile successfully</b>. What to do then?<br>
If you run the <b>g++</b> command and are unsuccesful with your compilation, then you might see an output that looks like this:


	hello.cpp: In function ‘int main()’:
	hello.cpp:10:1: error: expected ‘;’ before ‘}’ token
 	}


The compiler will try to give you hints on the line (in this case, it's complaining about line 10) where the error occurs, and also about what the error is (in this case a missing semicolon). You will also note that, in this case, an output executable file is not produced.

If you encounter an error, use the compiler hints and examine the line in question. If the compiler messsage is not sufficient to identify the error (which happens more than sometimes), you can search online to see when the error occurs in general. Once you have fixed the error, run the compilation command again. De-bugging a program code is a necessary ritual in almost all programs written (even those written by expert coders). More on that in a later class.


## Step 7: Submit your program for grading <a name="step7"></a>

Once you are satisfied that your program is correct, then it's time to submit it.


Log into your account on [https://www.gradescope.com/](https://www.gradescope.com/) and navigate to our course site: CS16 Spring 2018. Select this assignment. Then click on the "Submit" button on the bottom right corner to make a submission. You will be given the option of  uploading files from your local machine or submitting the code that is in a github repo. For now choose the first option and follow the steps to upload hello.cpp to gradescope. We will use the second method later on in the course.

You should receive 50/50 for a correct "Hello World " program

Congratulations on completing your first C++ program!

If you are in the Phelps lab or in CSIL, <b>make sure to log out of the machine before you leave</b>. Also, make sure to close all open programs before you log out. Some programs will not work next time if they are not closed. Remember to save all your open files before you close your text editor.

If you are logged in remotely, you can log out using the <b>exit</b> command in UNIX:

<pre>$ exit</pre>

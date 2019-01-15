---
num: "lect02"
desc: " Hello World! + unix, vim and git"
ready: true
pdfurl: /lectures/CS16_Lecture2.pdf
lecture_date: 2019-01-10
---

# Basic Unix Commands

In the displayed commands, don’t include brackets. E.g., `mkdir [name]` will look like `mkdir tmp`, if you want to create a directory called `tmp`.


`pwd`
used to print the working directory - displays the full path


`ls` lists the contents of a directory; if no directory is specified, it will list the contents of the current directory


`ls -l` 
lists the contents of a directory, and provides additional information about the file/directory; 
distinguishes between files and directories (if the line starts with the letter ‘d’, then it corresponds to a directory, if not, then it corresponds to a file)

`mv [src] [dest]` 
move a file/directory called `src` to a file/directory called `src` 

`rm [file]`
deletes/removes a file

`rm -r [dir]`
recursively deletes the contents of a directory ; 
if you use only `rm` for a directory, the operating system will complain and display the error message: `cannot remove [dir]: Is a directory`

`mkdir [name]`
make a new directory called `name`

`mkdir -p [level1/level2/...]`
allows you to create a series of nested directories 

`cd`
used to change directory you are currently located in

`~`
refers to the home directory

`..`
refers to the directory above the current one

`cd ..`
goes to the directory above the current one

`cd ~`
goes to the home directory

`./[name]`
used to execute a compiled program



# Vim Commands

The link below is a very useful guide to learn fundamental commands in Vim (most of these were shown in lecture on January 10th):

https://ucsb-cs16.github.io/topics/vim_basic_eight/

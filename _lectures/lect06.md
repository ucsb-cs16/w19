---
num: "lect06"
desc: "Relative vs absolute path; `switch` statement"
ready: true
lecture_date: 2019-01-24
---

**Announcements**
* Quizzes for now are graded for completion, but later some questions will be graded for correctness. The quizzes are meant as a gauge of problems that you may encounter on the exam, so use your score as a feedback on what you may be missing. 
*  For the homework and the midterm, one week of regrade requests will be made available, potentially giving points back. However, if more things are found to be wrong during the regrade, then more points will be taken off, so be judicious with the regrade requests.
* Regarding Gradescope, everyone should be submitting code individually, even though you worked in pairs to write the code. Both partners should be on the same machine when you are working on the lab assignment to get the full benefits of pair-programming.
* Github crash-course instructions will be either posted online or be discussed on Tuesday.

* Since the midterm is next Thursday, we will be holding a review session for the exam in **Phelps 2510 from 5-8pm on Wednesday, Jan 30th**. Go over the resources and practice resources that are made available on the site, and come the review session with any questions about specific questions, or other concepts you would like to have explained in more detail. At any time during the review session or open lab hours, discuss any doubts that you have with to the staff -- some of those questions may appear on the midterm!
* Anything from homework, labs, lectures, and textbook readings are fair game for the exam, which will cover all material up to Tuesday (up to textbook 4.1 to 4.3). One page of notes wil be allowed for the exam (typed or handwritten).

# Directory Navigation in Linux
* Refer to the screenshot from lecture for a diagram of a set of example directories. Imagine you start in your home directory, which holds several other directories. 
    * Use `pwd` to determine which directory you are currently in, `ls`to see contents of the current directory
        * E.g.: If you are in the `home` directory, and you want to see the contents of `home`, then just use the command `ls` (this is a shortcut to `ls .`)
    * To see the contents of another directory without moving out of your current directory, you can use *paths*   
        * E.g.: If you are in the `home` directory, which holds the `lab01` directory, and you want to look inside `lab01` without moving out of home, use the command `ls ./lab01` (or simply, `ls lab01`, because `lab01` is already in your current directory).
    * To copy a **directory**, use the command `cp -R [source] [destination]`
        * `-R` is a flag that indicates you are copying recursively and prepares cp to copy an entire directory
        * Don't use `-R` if you want to copy a file
        * You can use **absolute** or **relative** paths for either the source or destination directories
            * E.g.: 
                With absolute and relative, respectively:
                   `cp -R /home/jgaucho/cs16/lab02 .` 
                    * (the dot at the end indicates a relative path- copy the contents of the first directory into the current directory)
                With relative and relative, respectively:
                    `cp -R ./lab02  ../../jnewman`
                    * Grab lab02 directory from the current directory you are in (can also write it without ./ as just lab02)
                    * Can usually leave off ./ EXCEPT with executables- indicates that you are looking for an executable of that name in your current directory before you can run it
                With relative and absolute, respectively:
                    `cp -R ./lab02  /home/jnewman`
                    
                    In the above examples, which directory were you in?


    *  `*` is the **wildcard** symbol (indicates that you want to perform an action on everything in a directory *that matches the given pattern*, e.g., if a pattern is `*.cpp`, then it will match everything that ends in `.cpp`; if the pattern is `hw0*`, then we will grab everything that starts with "hw0", e.g., `hw00.cpp`, `hw01.cpp`, etc.).
        
* If a path starts with a `~` or a `.` (dot), it is a *relative* path. If it starts with  a `/` , it is an *absolute* path.
    * Relative paths indicate that you are looking for a file or directory in relation to the directory you are currently in, while absolute paths give the full path to the directory from the root. 
    * An absolute path with lead you to the same file or a directory regardless of your starting diretory or a user that uses it.
    * Accessing files using relative paths is often faster (to type :-)).
    
* Use the `..` command to reference previous/higher directories.
    * E.g.: `ls ../../` lists the contents of the parent directory of the parent directory of the directory you are currently in
        `cd ..` allows you to move back into the parent directory of the current one     
* You will get an error if you try to access or reference a directory or file that does not exist!

**Relative Paths**
* `cd cs16/lab02` only works from one location, so it is a relative path
    * changing your current location anywhere from that one location will cause that path not to work (unless... what are the exceptions?)
    * `.` indicates that you are looking at a directory inside your current one, deeper than your current one
* `ls .` and `ls` do the same thing
* `ls ..` will show contents of the directory one level higher (not necessarily the previous directory -- do you know why?)
* `ls ../lab02` will go to the directory one level up, look for a directory called lab02, and then list the contents of that directory (if it exists)
* Can use ../../../ etc to go to higher-level directories as needed


**Absolute Paths**
* You can type in absolute paths with cd to skip typing cd several times in a row, if target file/directory is several directories deep
    * EX- `cd one` 
            `cd two`
               `cd three`
    VS
        `cd one/two/three`
* Make sure you know where the absolute path to a directory actually starts- you can use `pwd` to figure out where you are, which will give you the absolute path for the directory you are currently in

* Can also use absolute paths with other commands:
    `mkdir /home/jnewman/cs16/lab01`
    * If you didn’t have a cs16 directory in jnewman, then this command will create one. Then it will create a lab01 directory inside that new directory


# Switches

* Switches take in a control variable (e.g., input from the user), and tests for different cases to determine how to proceed (i.e., which `case` statement to execute)
* The control variable **must** be initialized before entering the switch
* Remember to have `break` statements after each case, otherwise, the rest of the cases will be executed until a `break` statement is found
* Include an option to have a `default` case, e.g., in case the user’s input is not one of the options we are interested in
    * Don’t need a `break` after `default`, since it is always the last case in a switch
* Be careful how you set up the cases!
    * EX- prints “yes” if lowercase ‘y’ is entered, should also check for uppercase ‘Y’ 
* You can always get the same behavior of a switch with a series of if-else statements, but the switch syntax can be cleaner and simpler
* If you want to keep asking for user input, put all of it into a while or a do-while loop
*Note* 
`while( answer!= ‘q’ || ‘Q’ )` contains a logical error!
    * Remember **boolean operator precedence**: unary operator is evaluated before the ‘or’. Here, you are actually evaluating `(answer!=’q’) OR (‘Q’)`
        * `Q` will always evaluate to TRUE, since it has a non-zero ASCII value, and everything non-zero always evaluates to true, so this statement is always true, and the program will be stuck in an infinite loop

**Switch Syntax**

```c++
#include <iostream>
#include <string>

using namespace std;

int main (){

    char answer = 'z';
    double x = 5;
    int y = 3;

    cout << "5/3 = " << x/y << endl;

    return 0;


    do {
        cout << "Yes or no?" << endl;
        cin >> answer;

        switch(answer)
        {
        case 'Y':
        case 'y':
            cout << "You said yes! " << answer << endl;
            break;
        case 'N':
        case 'n':
            cout << "You said no! " << answer << endl;
            break;
        default:
            cout << "Default " << answer << endl;
            break;
        }
    } while (answer != 'q');

    cout << "Goodbye!" << endl;
    return 0;
}
```

We didn't get to talk about integer division in the 630 lecture, but you need to make sure you know how it works.

```c++
#include <iostream>
#include <string>

using namespace std;

int main (){
    char answer = 'z';

    do {
        cout << " Yes or no?" << endl;
        cin >> answer;

        switch(answer)
        {
            //When there are two cases one after another, they will both fall through to the same executed statements
            case 'Y':
            case 'y':
                cout << "You said Yes! " << answer << endl;
                break;
            case 'N':
            case 'n':
                cout << "You said No! " << answer << endl;
                break;
            default:
                cout << "default" << endl;
        }
    } while ((answer != 'q') && (answer != 'Q'));

    cout << "Goodbye!" << endl;

    return 0;
}
```



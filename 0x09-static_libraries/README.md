# C static libraries

## General 

* What is a static library, how does it work, how to create one, and how to use it

* Basic usage of ar, ranlib, nm

## Requiremets

* Allowed editors: vi, vim, emacs

* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

* All your files should end with a new line

* A README.md file, at the root of the folder of the project is mandatory

* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

* You are not allowed to use global variables

* No more than 5 functions per file

* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden

* You are allowed to use _putchar

* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account

* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h

* Don’t forget to push your header file

## Bash

* Allowed editors: vi, vim, emacs

* All your scripts will be tested on Ubuntu 20.04 LTS

* All your files should end with a new line (why?)

* The first line of all your files should be exactly #!/bin/bash

* A README.md file, at the root of the folder of the project, describing what each script is doing

* All your files must be executable

## Steps

#### Task 1
*  mkdir, README.md, Main.h

* Creating the 20 files which is copied from exsiting previous project

* convert of object files - .o using gcc -c *.c for all .c file and check betty

* Create Libary - ar rcs libmy.c

* Move a copy of .o file into lib by using ar rcs libmy.a *.o command

* git add, commit and push

* Check for number of function - ar -t libmy.a | wc -l


#### Task 2

* Create the file, the code, make and executivable file using chmod u+x .file, Test the file ./file

* git add, commit and push

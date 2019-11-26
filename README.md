<h1 align ="center"> Simple_Shell() </h1><br>

---

## Table of Contents

---

- [Authors](#authors)
- [Introduction](#introduction)
- [Description](#description)
- [Installation](#installation)
- [Test](#Test)
- [Files](#files)
- [Usage](#Usage)
- [Flowchart](#Flowchart)
- [Examples](#Examples)
- [Built With](#built-with)
- [Acknowledgments](#acknowledgments)
---

## Authors
---

* [Camilo Isaza](https:://twitter.com/Andresmelek)
* [Santiago Aldana](https://twitter.com/Santi_cc2)
---

## Introduction
---

> Final project for Holberton School first trimester. This project is for us to show what we have learnt in C with the help of loops, conditionals, macros, structures, variables, pointers and more, also to test our teamwork skills.
---

## Description
---

> The Simple_Shell is the command interpretor in an operating system such as Unix or GNU/Linux, it is a program that executes other programs. It provides a computer user an interface to the Unix/GNU Linux system so that the user can run different commands or utilities/tools with some input data.

```
./hsh
```
---

## Installation

---

> In order to run the Simple_Shell program in your console, you must install in your repository the Simple_Shell program by cloning the following repository (shown below) in your machine, running:

```
git clone https://github.com/
```

---

## Test

---

- In order to compile the function you must run the following line in your shell:

```
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c -o [FILENAME]
```

_Note_: Note that you need to create your own main.c file with the content you want to print.
And then run the file.sh to see the outputs, with the line:

```
 ./[FILENAME]
```

Or you can compile the program with the file included  Makefile (it is a file that compilates and executes the file at the same time.) it is used like this:

```
$ make 
```

- To read the manual you must run:
```

man ./[FILE]

```

---

Taking into account the structure, for our case it would be 

```man ./man_1_page```

Now you are able to get through the Simple_Shell programm.

---

## FILES

---

| File Name | Description and contents |
| --- | --- |
|[error_handler.c]() | In this file we can find the functions that handles the errors outside the system call perror. |
|[execution.c]() | In this file we can find the functions that get the path, tokenizes it, tokenizes the commands and runs the excevev system call|
|[funciones.c]() | In this file is the first pack of auxiliar functions to make evertything happend, functions to get the lenght of a string, compare a string, free mallocs and print the environment. |
|[funciones_two.c]() | In this file we can find the second pack of functions, to convert a string into an integer, print a character, print a string and ommit the spaces. |
|[funciones_three.c]() | In this file we can find the third pack of auxiliar functions where the function to duplicate strings exists. |
|[holberton.h]() | Is the header where are the libraries and functions prototypes used in the project |
|[hsh]() | This is executable file, to run the program under the ./hsh command |
|[loop.c]() | In this file we can find the functions to start the interactive and non-interactive mode, where the child process are created, the signals are handled and the exits are set. |
|[main.c]() | This is the file that makes the magic happen, the infinite loop |
|[Makefile]() | Contains the compilation flags and executes the programm |
|[]() | |
---

##  Usage
---

> The Simple_Shell has two modes: **Interactive** in which the shell takes the commands from the standard input, executes them and gets ready to read another command-line.
As an example you can use the <b>ls</b> command for listing files in the current directory:

```
$ ls
loop.c AUTHORS main.c execution.c error_handler.c holberton.h funciones.c Makefile
$
```

- The other mode is non-interactive. For this, the command should be passed through a pipe
```
$ echo "/bin/ls" | ./hsh
loop.c AUTHORS main.c execution.c error_handler.c holberton.h funciones.c Makefile
```

---
## Flowchart
---
Pending...
---

## Examples
---

- Note: That the result is going to change depending on your machine or where you are located

```
$ ls

loop.c AUTHORS main.c execution.c error_handler.c holberton.h funciones.c Makefile
 
```
---
```
$ echo "/bin/ls" | ./hsh

loop.c AUTHORS main.c execution.c error_handler.c holberton.h funciones.c Makefile
```
---
```
$ ls -la /home/andresmelek/hbtn/shell


drwxrwxr-x 3 andresmelek andresmelek  4096 nov 25 21:41 .
drwxrwxr-x 4 andresmelek andresmelek  4096 nov 23 13:05 ..
-rw-rw-r-- 1 andresmelek andresmelek   997 nov 25 20:58 error_handler.c
-rw-rw-r-- 1 andresmelek andresmelek  2052 nov 25 20:58 execution.c
-rw-rw-r-- 1 andresmelek andresmelek  1056 nov 25 20:58 funciones.c
-rw-rw-r-- 1 andresmelek andresmelek   683 nov 25 20:58 funciones_three.c
-rw-rw-r-- 1 andresmelek andresmelek  1112 nov 25 20:58 funciones_two.c
drwxrwxr-x 8 andresmelek andresmelek  4096 nov 25 20:58 .git
-rw-rw-r-- 1 andresmelek andresmelek   664 nov 25 20:58 holberton.h
-rwxrwxr-x 1 andresmelek andresmelek 19880 nov 25 21:00 hsh
-rw-rw-r-- 1 andresmelek andresmelek  1227 nov 25 21:00 loop.c
-rw-rw-r-- 1 andresmelek andresmelek   146 nov 23 16:07 main.c
-rw-rw-r-- 1 andresmelek andresmelek  3460 nov 25 21:41 man_1_simple_shell
-rw-rw-r-- 1 andresmelek andresmelek     8 nov 23 13:05 README.md
$
```
---
```
$ pwd

/home/vagrant/hbtn/shell

$
```
---
```
$ cp file_from file_to

file_from file_to
$
```
---

## Built With

---

* [C](https://en.wikipedia.org/wiki/C_(programming_language))
* [Vim](https://https://en.wikipedia.org/wiki/Vim_(text_editor)/)
* [Vagrant](https://www.vagrantup.com/)
* [Peppermint](https://www.osboxes.org/peppermint/)
* [Ubuntu](https://www.ubuntu.com/)
* [GCC 4.8.4 Compiler](https://gcc.gnu.org/)

---

## Acknowledgments

---

* [Holberton School](https://www.holbertonschool.com/)

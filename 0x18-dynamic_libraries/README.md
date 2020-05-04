# 0x18. C - Dynamic libraries
## Resources :books:

* [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://intranet.hbtn.io/rltoken/FrHmqtTW-frrOt0yf2blOw)
* [create dynamic libraries on Linux](https://intranet.hbtn.io/rltoken/Zj0XtgNWUQyEYuABr47p8Q)
* [Technical Writing](https://intranet.hbtn.io/rltoken/NnmQ5eohod3BpT3r0cFlRA)

## Learning Objectives :bulb:
* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
* Basic usage nm, ldd, ldconfig

## Requirements :white_check_mark:

### C
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
* Don’t forget to push your header file
### Shell Scripts
* Allowed editors: vi, vim, emacs
* All your scripts will be tested on Ubuntu 14.04 LTS
* All your files should end with a new line (why?)
* The first line of all your files should be exactly #!/bin/bash
* A README.md file, at the root of the folder of the project, describing what each script is doing
* All your files must be executable

## Tasks :page_with_curl:
### Mandatory
- [x] **[0. A library is not a luxury but one of the necessities of life](./libholberton.so)** - Create the dynamic library libholberton.so containing all the functions listed below
- [x] **[1. Without libraries what have we? We have no past and no future](./1-create_dynamic_lib.sh)** - Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
### Advance :muscle:
- [x] **[3. Let's call C functions from Python](./100-operations.so)** - Create a dynamic library that contains C functions that can be called from Python. See example for more detail.
- [x] **[4. Code injection: Win the Giga Millions!](./101-make_me_win.sh)** - I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

## Author :pencil:
**Santiago Peña Mosquera** - twitter [@Santiag11470161](https://twitter.com/Santiag11470161) - LinkedIn [Santiago Peña Mosquera](https://www.linkedin.com/in/santiago-pe%C3%B1a-mosquera-abaa20196/)
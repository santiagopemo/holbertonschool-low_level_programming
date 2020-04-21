# 0x0B. C - malloc, free
## Resources :books:

* [0x0a - malloc & free - quick overview](https://intranet.hbtn.io/rltoken/zDApffV1n5HOh6Awvd3P6w)
* [Dynamic memory allocation in C - malloc calloc realloc free ](https://intranet.hbtn.io/rltoken/yD3tk5u--ws7QNFwTOfaDQ)
* [Automatic and dynamic allocation, malloc and free](https://intranet.hbtn.io/rltoken/VsK9iboQjTk9scKP8m_qGA)

## Learning Objectives :bulb:
* What is the difference between automatic and dynamic allocation
* What is `malloc` and `free` and how to use them
* Why and when use `malloc`
* How to use `valgrind` to check for memory leak

## Requirements :white_check_mark:
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with `gcc` 4.8.4 using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
* All your files should end with a new line
* A `README.md file`, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
* In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `holberton.h`
* Don’t forget to push your header file

## Tasks :page_with_curl:
### Mandatory
- [x] **[0-create_array.c](./0-create_array.c)** - Write a function that creates an array of chars, and initializes it with a specific char.
- [x] **[1-strdup.c](./1-strdup.c)** - Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- [x] **[2-str_concat.c](./2-str_concat.c)** - Write a function that concatenates two strings.
- [x] **[3-alloc_grid.c](./3-alloc_grid.c)** - Write a function that returns a pointer to a 2 dimensional array of integers.
- [x] **[4-free_grid.c](./4-free_grid.c)** - Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.
- [x] **[5-argstostr.c](./5-argstostr.c)** - Write a function that concatenates all the arguments of your program.
### Advance :muscle:
- [ ] **[100-strtow.c](./100-strtow.c)** - Write a function that splits a string into words.

## Author :pencil:
**Santiago Peña Mosquera** - twitter [@Santiag11470161](https://twitter.com/Santiag11470161) - LinkedIn [Santiago Peña Mosquera](https://www.linkedin.com/in/santiago-pe%C3%B1a-mosquera-abaa20196/)

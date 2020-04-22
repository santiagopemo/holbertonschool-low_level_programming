# 0x0D. C - Preprocessor
## Resources :books:

* [Understanding C program Compilation Process](https://intranet.hbtn.io/rltoken/UlmUG7PSamY2_qL6xze6wg)
* [Object-like Macros](https://intranet.hbtn.io/rltoken/KAqnlwAvPZ84KI2JFlJpSg)
* [Macro Arguments](https://intranet.hbtn.io/rltoken/cJyU0mmGRx_Wd9x8WwygOQ)
* [Pre Processor Directives in C](https://intranet.hbtn.io/rltoken/A5176irunoejPUjwT3pFCQ)
* [The C Preprocessor](https://intranet.hbtn.io/rltoken/lgohqkU5DlzUBkO2MeMmHA)
* [Standard Predefined Macros](https://intranet.hbtn.io/rltoken/C47iIZ3tGug6sklTB7hT_Q)
* [include guard](https://intranet.hbtn.io/rltoken/sqLUMtBCgAAXVdhIaVoaWQ)
* [Common Predefined Macros](https://intranet.hbtn.io/rltoken/fJJUPJ-zZXlh3db00FEsJw)

## Learning Objectives :bulb:
* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files

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
* All your header files should be include guarded

## Tasks :page_with_curl:
### Mandatory
- [x] **[0-object_like_macro.h](./0-object_like_macro.h)** - Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.
- [x] **[1-pi.h](./1-pi.h)** - Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.
- [x] **[2-main.c](./2-main.c)** - Write a program that prints the name of the file it was compiled from, followed by a new line.
- [x] **[3-function_like_macro.h](./3-function_like_macro.h)** - Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.
- [x] **[4-sum.h](./4-sum.h)** - Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

### Advance :muscle:
- [x] **[101-preprocessor_abuse.c](./101-preprocessor_abuse.c)** - Write a program that can print `Hello, Holberton`, followed by a new line.


## Author :pencil:
**Santiago Peña Mosquera** - twitter [@Santiag11470161](https://twitter.com/Santiag11470161) - LinkedIn [Santiago Peña Mosquera](https://www.linkedin.com/in/santiago-pe%C3%B1a-mosquera-abaa20196/)

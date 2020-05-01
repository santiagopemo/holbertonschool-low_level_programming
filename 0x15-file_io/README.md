# 0x15. C - File I/O
## Resources :books:

* [File descriptors](https://intranet.hbtn.io/rltoken/zwnc2vqfmCs_ZThsyxkjJw)
* [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://intranet.hbtn.io/rltoken/Ig_LMzPlXTT-EwoSAgYK-Q)

## Learning Objectives :bulb:
* Look for the right source of information online
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and * what are their `POSIX` names
* How to use the I/O system calls `open`, `close`, `read` and `write`
* What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
* What are file permissions, and how to set them when creating a file * * with the `open` system call
* What is a system call
* What is the difference between a function and a system call

## Requirements :white_check_mark:
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with `gcc` 4.8.4 using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are `malloc` and `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
* In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `holberton.h`
* Don’t forget to push your header file
* All your header files should be include guarded
* Tip: always prefer using symbolic constants (`POSIX`) vs numbers when it makes sense. For instance read(`STDIN_FILENO`, ... vs read(`0, ...`

## Tasks :page_with_curl:
### Mandatory
- [x] **[0. Tread lightly, she is near](./0-read_textfile.c)** - Write a function that reads a text file and prints it to the POSIX standard output.
- [x] **[1. Under the snow](./1-create_file.c)** - Create a function that creates a file.
- [x] **[2. Speak gently, she can hear](./2-append_text_to_file.c)** - Write a function that appends text at the end of a file.
- [x] **[3. cp ](./3-cp.c)** - Write a program that copies the content of a file to another file.
### Advance :muscle:
- [ ] **[4. elf](./100-elf_header.c)** - Write a program that displays the information contained in the `ELF` header at the start of an `ELF` file.

## Author :pencil:
**Santiago Peña Mosquera** - twitter [@Santiag11470161](https://twitter.com/Santiag11470161) - LinkedIn [Santiago Peña Mosquera](https://www.linkedin.com/in/santiago-pe%C3%B1a-mosquera-abaa20196/)

# 0x1E. C - Search Algorithms
## Resources :books:
### Read or watch:

* [Search algorithm]()
* [Space complexity (1)]()
## Learning Objectives :bulb:
* At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs
## Requirements :white_check_mark:
### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called search_algos.h
* Don’t forget to push your header file
* All your header files should be include guarded

## Tasks
### Mandatory :page_with_curl:
- [x] **[0. Linear search](./0-linear.c)** - Write a function that searches for a value in an array of integers using the Linear search algorithm
- [x] **[1. Binary search](./1-binary.c)** - Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
- [x] **[2. Big O #0](./2-O)** - What is the time complexity (worst case) of a linear search in an array of size n?
- [x] **[3. Big O #1](./3-O)** - What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
- [x] **[4. Big O #2](./4-O)** - What is the time complexity (worst case) of a binary search in an array of size n?
- [x] **[5. Big O #3](./5-O)** - What is the space complexity (worst case) of a binary search in an array of size n?
- [x] **[6. Big O #4](./6-O)** - What is the space complexity of this function / algorithm?
### Advance :muscle:
- [x] **[7. Jump search](./100-jump.c)** - You have to use the square root of the size of the array as the jump step
- [x] **[8. Big O #5](./101-O)** - Repo
- [x] **[9. Interpolation search](./102-interpolation.c)** - Repo
- [x] **[10. Exponential search](./103-exponential.c)** - Once you’ve found the good range, you need to use a binary search
- [x] **[11. Advanced binary search](./104-advanced_binary.c)** - You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem
- [x] **[12. Jump search in a singly linked list](./105-jump_list.c)** - You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list
- [x] **[13. Linear search in a skip list](./106-linear_skip.c)** - As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. A linked list with an express lane is called a skip list. This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as sizeof(skiplist_t) > sizeof(listint_t) (see example below)
- [x] **[14. Big O #6](./107-O)** - Repo
- [x] **[15. Big O #7](./108-O)** - Repo
## Author :pencil:
**Santiago Peña Mosquera** - twitter [@Santiag11470161](https://twitter.com/Santiag11470161) - LinkedIn [Santiago Peña Mosquera](https://www.linkedin.com/in/santiago-pe%C3%B1a-mosquera-abaa20196/)

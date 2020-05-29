# 0x1A. C - Hash tables
## Resources :books:

* [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://intranet.hbtn.io/rltoken/uodWZz-2jyHReOeToaLNdQ)
* [Hash function](https://intranet.hbtn.io/rltoken/YiFi_oMjd9cZ4VepsS2RKQ)
* [Hash table](https://intranet.hbtn.io/rltoken/Kswyyb1f2JY3dn-3TEckUQ)

## Learning Objectives :bulb:
* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

## Requirements :white_check_mark:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called hash_tables.h
* Don’t forget to push your header file
* All your header files should be include guarded

## Tasks :page_with_curl:
### Mandatory
- [x] **[0. >>> ht = {}](./0-hash_table_create.c)** - Write a function that creates a hash table.
- [x] **[1. djb2](./1-djb2.c)** - Write a hash function implementing the djb2 algorithm.
- [x] **[2. key -> index](./2-key_index.c)** - Write a function that gives you the index of a key.
- [x] **[3. >>> ht['betty'] = 'holberton'](./3-hash_table_set.c)** - Write a function that adds an element to the hash table.
- [x] **[4. >>> ht['betty']](./4-hash_table_get.c)** - Write a function that retrieves a value associated with a key.
- [x] **[5. >>> print(ht) ](./5-hash_table_print.c)** - Write a function that prints a hash table.
- [x] **[6. >>> del ht](./6-hash_table_delete.c)** - Write a function that deletes a hash table.


### Advance :muscle:
- [x] **[7. $ht['Betty'] = 'Holberton'](./100-sorted_hash_table.c)** - In PHP, hash tables are ordered. Wait… WAT? How is this even possible?

## Author :pencil:
**Santiago Peña Mosquera** - twitter [@Santiag11470161](https://twitter.com/Santiag11470161) - LinkedIn [Santiago Peña Mosquera](https://www.linkedin.com/in/santiago-pe%C3%B1a-mosquera-abaa20196/)
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @argc: count of arguments in main function
 * @argv: contains the strings of arguments in main function
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;

	UNUSED(argv);
	UNUSED(argc);

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

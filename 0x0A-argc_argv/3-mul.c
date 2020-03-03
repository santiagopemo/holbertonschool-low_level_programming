#include "holberton.h"
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: count of arguments in main function
 * @argv: contains the strings of arguments in main function
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

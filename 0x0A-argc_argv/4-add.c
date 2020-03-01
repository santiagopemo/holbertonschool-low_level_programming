#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code for Holberton School students.
 * @argc: count of arguments in main function
 * @argv: contains the strings of arguments in main function
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;
	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

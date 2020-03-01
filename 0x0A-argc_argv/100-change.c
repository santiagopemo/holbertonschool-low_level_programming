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
	int rest, coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	rest = atoi(argv[1]);
	if (rest < 1)
	{
		printf("Error\n");
		return (1);
	}
	while (rest)
	{
		if (rest >= 25)
			rest -= 25;
		else if (rest >= 10)
			rest -= 10;
		else if (rest >= 5)
			rest -= 5;
		else if (rest >= 2)
			rest -= 2;
		else if (rest >= 1)
			rest -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}

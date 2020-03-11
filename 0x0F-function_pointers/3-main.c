#include "3-calc.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments
 * @argv: array with strings of arguments
 *
 * Return: result.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}

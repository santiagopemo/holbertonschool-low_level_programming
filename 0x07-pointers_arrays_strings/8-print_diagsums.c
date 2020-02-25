#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: array
 * @size: size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, diag1, diag2;

	diag1 = 0;
	diag2 = 0;
	for (i = 0; i < size * size; i += (size + 1))
		diag1 += *(a + i);
	i = size - 1;
	for (; i < (size * size - 1); i += (size - 1))
		diag2 += *(a + i);
	printf("%d, %d\n", diag1, diag2);
}

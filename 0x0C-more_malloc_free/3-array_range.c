#include "holberton.h"

/**
 * array_range - function that creates an array of integers
 * @min: min number
 * @max: max number
 * Return: array int
 */
int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min;
	p = malloc(sizeof(int) * (size + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		*(p + i) = min + i;
	return (p);
}

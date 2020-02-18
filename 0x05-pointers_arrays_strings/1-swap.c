#include "holberton.h"

/**
 * swap_int - swap numbers
 * @a: pointer a
 * @b: pointer b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

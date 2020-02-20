#include "holberton.h"

/**
 * reverse_array - reverse an arrray
 * @a: array
 * @n: number
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *t = a;
	int j = 0;

	while ((a + j) < (t + (--n)))
	{
		*(a + j) ^= *(t + n);
		*(t + n) ^= *(a + j);
		*(a + j) ^= *(t + n);
		j++;
	}
}

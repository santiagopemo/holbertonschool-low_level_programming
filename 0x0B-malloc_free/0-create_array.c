#include "holberton.h"

/**
 * create_array -  that creates an array of chars
 * @size: size
 * @c: especific char
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(sizeof(char) * size);
	if (a == 0 || size == 0)
		return (0);
	for (i = 0; i < size; i++)
		*(a + i) = c;
	return (a);
}

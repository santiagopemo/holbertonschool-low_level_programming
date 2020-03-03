#include "holberton.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 *@str: string
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	char *a;
	int size;

	size = 0;
	if (str == 0)
		return (0);
	while (*(str + size))
		size++;
	a = malloc(sizeof(char) * size);
	if (a == 0)
		return (0);
	while (size--)
	{
		*(a + size) = *(str + size);
	}
	return (a);
}

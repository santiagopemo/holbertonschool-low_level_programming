#include "holberton.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int size;

	size = 0;
	if (str)
	{
		while (*(str + size))
			size++;
		size++;
		a = malloc(sizeof(char) * size);
		if (a)
		{
			while (size--)
			{
				*(a + size) = *(str + size);
			}
			return (a);
		}
	}
	return (NULL);
}

#include "holberton.h"

/**
 * string_toupper - lower to upper
 * @c: string
 * Return: char
 */
char *string_toupper(char *c)
{
	int i = 0;
	while (*(c + i))
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
			*(c + i) -= 32;
		i++;
	}
	return (c);
}

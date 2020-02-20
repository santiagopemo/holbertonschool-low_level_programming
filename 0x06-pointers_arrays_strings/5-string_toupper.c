#include "holberton.h"

/**
 * string_toupper - lower to upper
 * @c: string
 * Return: char
 */
char *string_toupper(char *c)
{
	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 32;
		c++;
	}
	return (c);
}

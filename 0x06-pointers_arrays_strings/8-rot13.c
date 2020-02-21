#include "holberton.h"

/**
 * rot13 - encode string
 * @c: char
 * Return: char
 */
char *rot13(char *c)
{
	int i, j;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; *(l + j); j++)
		{
			if (*(c + i) == *(l + j))
			{
				*(c + i) = *(n + j);
			}
		}
	}
	return (c);
}

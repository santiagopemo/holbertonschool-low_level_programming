#include "holberton.h"

/**
 * leet - encode string
 * @c: char
 * Return: char
 */
char *leet(char *c)
{
	int i, j;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

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

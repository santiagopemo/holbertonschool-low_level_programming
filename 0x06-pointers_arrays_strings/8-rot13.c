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
	char t;

	for (i = 0; *(c + i); i++)
	{
		t = 0;
		for (j = 0; j <= 51 && t == 0; j++)
		{
			if (*(c + i) == *(l + j))
			{
				*(c + i) = *(n + j);
				t = 1;
			}
		}
	}
	return (c);
}

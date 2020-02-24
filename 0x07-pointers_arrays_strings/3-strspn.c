#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: compare segment
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int l = 0;

	for (i = 0; *(accept + i); i++)
	{
		for (j = 0; *(s + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				l++;
				break;
			}
		}
	}
	return (l + 1);
}

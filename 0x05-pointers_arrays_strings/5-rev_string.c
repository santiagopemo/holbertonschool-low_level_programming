#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - print string in reverse
 * @s: string
 * Return: nothing
 */
void rev_string(char *s)
{
	char *t = s;

	while (*t)
	{
		t++;
	}
	while (s < --t)
	{
		*s ^= *t;
		*t ^= *s;
		*s ^= *t;
		s++;
	}
}

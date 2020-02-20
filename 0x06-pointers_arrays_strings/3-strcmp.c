#include "holberton.h"

/**
 * _strcmp - compare 2 strings
 * s1: first string
 * s2: second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int sum_s1, sum_s2, res;

	sum_s1 = 0;
	sum_s2 = 0;
	while (*s1)
	{
		sum_s1 += *s1;
		s1++;
	}
	while (*s2)
	{
		sum_s2 += *s2;
		s2++;
	}
	if (s1 < s2)
		res = -15;
	else if (s1 == s2)
		res = 0;
	else
		res = 15;
	return (res);
}

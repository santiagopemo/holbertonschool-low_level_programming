#include "holberton.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: nothing
 */
int get_endianness(void)
{
	int i = 1;
	char *p = (char *) &i;

	if (p[0] == 1)
		return (1);
	else
		return (0);
}

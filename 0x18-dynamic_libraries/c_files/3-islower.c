#include "holberton.h"

/**
 * _islower - define character
 * @c: the character
 *
 * Return: 1 if is lower 0 if not
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

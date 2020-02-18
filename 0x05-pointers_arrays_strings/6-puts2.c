#include "holberton.h"

/**
 * puts2 - puts string
 * @str: string
 * Return: nothing
 */
void puts2(char *str)
{
	if (str)
	{
		do {
			if (*str)
			{
			_putchar(*str++);
			}
		} while (*str++);
		_putchar('\n');
	}
}

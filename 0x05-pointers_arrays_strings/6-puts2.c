#include "holberton.h"

/**
 * puts2 - puts string
 * @str: string
 * Return: nothing
 */
void puts2(char *str)
{
	do {
		_putchar(*str);
		str++;
		str++;
	} while (*str);
	_putchar('\n');
}

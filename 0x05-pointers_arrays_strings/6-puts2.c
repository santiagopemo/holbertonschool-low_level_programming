#include "holberton.h"

/**
 * puts2 - puts string
 * @str: string
 * Return: nothing
 */
void puts2(char *str)
{
	while(*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

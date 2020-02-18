#include "holberton.h"

/**
 * puts_half - puts from half
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
	int l;

	for (l = 0; *(str + l); l++)
		continue;
	for (str += (l + 1) / 2; *str; str++)
		_putchar (*str);
	_putchar('\n');
}

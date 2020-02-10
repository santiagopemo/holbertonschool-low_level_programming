#include "holberton.h"

/**
 * print_sign - print the sign
 * @n: the number
 *
 * Return: 1 if is +, 0 if is 0, -1 if is -
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}

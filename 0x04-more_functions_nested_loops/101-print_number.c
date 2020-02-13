#include "holberton.h"

/**
 * print_number - print numbers
 * @n: number
 * Return: nothing
 */
void print_number(int n)
{

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n >= 1000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n % 1000) / 100) + '0');
		_putchar((((n % 1000) % 100) / 10) + '0');
		_putchar((((n % 1000) % 100) % 10) + '0');
	}
	if (n >= 100 && n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar(((n % 100) % 10) + '0');
	}
	if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n == 0)
		_putchar('0');
}

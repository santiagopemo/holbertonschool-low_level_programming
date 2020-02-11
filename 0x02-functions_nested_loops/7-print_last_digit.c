#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @n: number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n >= 0)
	{
		ld = n % 10;
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = ((-1 * n) % 1);
		_putchar(ld + '0');
		return (ld);
	}
}

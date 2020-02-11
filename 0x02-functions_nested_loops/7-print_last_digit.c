#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @n: number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
	{
		ld = (-ld);
	}
	else
	{
		ld = ld;
	}
	_putchar(ld + '0');
	return (ld);
}

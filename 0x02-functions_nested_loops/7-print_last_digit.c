#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @n: number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{

	if (n < 0)
	{
		_putchar((-n % 10) + 48);
		return (-n % 10);
	}
	else
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
}

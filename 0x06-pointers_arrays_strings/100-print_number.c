#include "holberton.h"

/**
 * print_number - print numbers
 * @n: number
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int num;

	if (n >= 0)
	{
		if (n >= 10)
			print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar('-');
		num = -1 * n;
		if (num >= 10)
			print_number(num / 10);
		_putchar((num % 10) + '0');
	}
}

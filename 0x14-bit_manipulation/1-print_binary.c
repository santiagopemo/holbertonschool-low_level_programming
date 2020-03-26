#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int t = n, r = 1;
	int i;

	for (i = 0; t > 0; t >>= 1, i++)
	{
		if (i > 0)
			r *= 2;
	}
	while (i--)
	{
		if (n & r)
			_putchar('1');
		else
			_putchar('0');

		r >>= 1;
	}
	if (n == 0)
		_putchar('0');
}

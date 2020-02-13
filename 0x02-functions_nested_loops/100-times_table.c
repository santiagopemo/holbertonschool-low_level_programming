#include "holberton.h"

/**
 * print_times_table - number table
 * @n: number
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, num;

	if (!(n > 15 || n <= 0))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (j = 1; j <= n; j++)
			{
				num = i * j;
				if (num >= 100)
				{
					_putchar((num / 100) + '0');
					_putchar(((num / 10) % 10) + '0');
				}
				if (num >= 10 && num < 100)
				{
					_putchar(' ');
					_putchar(((num / 10) % 10) + '0');
				}
				if (num < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((num % 10) + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

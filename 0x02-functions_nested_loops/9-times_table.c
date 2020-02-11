#include "holberton.h"

/**
 * times_table - number table
 *
 *
 * Return: nothing
 */
void times_table(void)
{
	int i, j, num, dec, uni;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j < 10; j++)
		{
			num = j * i;
			dec = num / 10;
			uni = num % 10;

			if (num > 10)
			{
				_putchar(dec + '0');

			}
			if (num <= 10)
				_putchar(' ');
			_putchar(uni + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

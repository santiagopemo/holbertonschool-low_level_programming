#include "holberton.h"

/**
 * print_diagonal - prinat a diagonal
 * @n: number of times
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i == j)
				{
					_putchar(92);
					_putchar('\n');
					break;
				}
				else
					_putchar(' ');

			}
		}
	}
	else
		_putchar('\n');
}

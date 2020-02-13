#include "holberton.h"

/**
 * print_triangle - prinat a diagonal
 * @size: size of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j > (size - i))
				{
					_putchar(35);
				}
				else
					_putchar(' ');

			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

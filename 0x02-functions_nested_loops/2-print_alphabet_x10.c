#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet x 10
 *
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	int i, l;

	for (i = 0; i <= 9; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
			_putchar('\n');
	}

}

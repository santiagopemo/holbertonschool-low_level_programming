#include "holberton.h"

/**
 * print_alphabet - print the alphabet
 *
 *
 * Return: void
 *
 */
void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
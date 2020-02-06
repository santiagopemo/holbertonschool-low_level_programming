#include <stdio.h>
/**
 * main - c program that prints the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}

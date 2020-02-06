#include <stdio.h>
/**
 * main - c program that prints the alphabet
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}

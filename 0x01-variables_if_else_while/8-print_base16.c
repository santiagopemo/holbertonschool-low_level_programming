#include <stdio.h>
/**
 * main - c program that prints the alphabet
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 103; ++i)
	{
		if (i < 58 || i > 96)
			putchar(i);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, prime_factor;
	long int num;

	num = 612852475143;

	for (i = 2; num > 1; i++)
	{
		while ((num % i) == 0)
		{
			prime_factor = i;
			num /= i;
		}
	}
	printf("%d\n", prime_factor);
	return (0);
}

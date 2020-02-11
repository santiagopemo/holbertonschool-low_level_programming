#include <stdio.h>
/**
  * positive_or_negative - randon number
  *
  * Return: nothing
  */
void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
}

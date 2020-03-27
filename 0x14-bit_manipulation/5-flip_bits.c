#include "holberton.h"

/**
 * flip_bits - count flip bits between two numbers
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits you would need to flip to get from one number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, bits = 0;
	unsigned long int dif = n ^ m, compare = 1;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (dif & compare)
			bits++;
		compare <<= 1;
	}
	return (bits);
}

#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if ((1 << index) & n)
		return (1);
	return (0);
}

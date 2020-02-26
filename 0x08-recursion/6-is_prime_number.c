#include "holberton.h"

/**
 * _prime - prime number
 * @num: number;
 * @i: counter
 * Return: the square root
 */
int _prime(int i, int num)
{
	if (num % i == 0 || num < 2)
		return (0);
	if (i > num / 2 || num == 2)
		return (1);
	return (_prime(i + 1, num));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number;
 * Return: the square root
 */
int is_prime_number(int n)
{
	return (_prime(2, n));
}

#include "holberton.h"

/**
 * _sqrt - natural square
 * @num: number;
 * @r: root
 * Return: the square root
 */
int _sqrt(int r, int num)
{
	if (r * r == num)
		return (r);
	if (r * r < 0 || r * r > num)
		return (-1);
	return (_sqrt(r + 1, num));
}
/**
 * _sqrt_recursion - natural square root of a number
 * @n: number;
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}

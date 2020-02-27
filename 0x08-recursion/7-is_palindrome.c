#include "holberton.h"


/**
 * _strlen - returns the length of a string
 * @c: string
 * Return: pointer to s
 */
char *_strlen(char *c)
{
	if (*c)
		return (_strlen(c + 1));
	return (c);
}

/**
 * compares - compares string
 * @a: pointer to a
 * @b: pointer to b
 * Return: 1 o 0
 */
int compares(char *a, char *b)
{
	if (a > b)
		return (1);
	if (*a != *b)
		return (0);
	return (compares(a + 1, b - 1));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to a string
 * Return: 1 o 0
 */
int is_palindrome(char *s)
{
	return (compares(s, _strlen(s) - 1));
}

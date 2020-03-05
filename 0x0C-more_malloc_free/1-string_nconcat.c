#include "holberton.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: numbers of chars from s2
 * Return: pointer type char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1, size2, i;

	size1 = size2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + size1))
		size1++;
	while (*(s2 + size2))
		size2++;
	if (n >= size2)
		n = size2;
	p = malloc(sizeof(char) * (size1 + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		*(p + i) = *(s1 + i);
	for (i = 0; i < n; i++)
		*(p + (size1 + i)) = *(s2 + i);
	*(p + (size1 + i)) = '\0';
	return (p);
}

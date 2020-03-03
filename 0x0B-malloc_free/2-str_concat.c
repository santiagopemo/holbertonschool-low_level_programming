#include "holberton.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int size1, size2, i;

	size1 = size2 = 0;
	if (s1 == NULL || s2 == NULL)
		return ("");
	while (*(s1 + size1))
		size1++;
	while (*(s2 + size2))
		size2++;
	size2++;
	a = malloc(sizeof(char) * (size1 + size2));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		*(a + i) = *(s1 + i);
	for (i = 0; i < size2; i++)
		*(a + (i + size1)) = *(s2 + i);
	*(a + (size1 + size2)) = '\0';
	return (a);
}

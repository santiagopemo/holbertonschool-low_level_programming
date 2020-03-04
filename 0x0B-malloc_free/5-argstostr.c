#include "holberton.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: count
 * @av: array
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i, j, size, acum;
	char *p;

	acum = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j); j++)
			size++;
	}
	size++;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j); j++)
			*(p + (acum + j)) = *(*(av + i) + j);
		*(p + (acum + j)) = '\n';
		acum += j;
		acum++;
	}
	return (p);
}

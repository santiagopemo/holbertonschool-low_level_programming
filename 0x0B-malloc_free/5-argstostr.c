#include "holberton.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: count
 * @av: array
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i, j, size, sum;
	char *p;

	size = sum = 0;
	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j); j++)
			size++;
	}
	size++;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j); j++)
			*(p + (sum + j)) = *(*(av + i) + j);
		*(p + (sum + j)) = '\n';
		sum += j;
		sum++;
	}
	*(p + sum) = '\0';
	return (p);
}

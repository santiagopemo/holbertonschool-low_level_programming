#include "holberton.h"

/**
 * _calloc -function that allocates memory for an array
 * @nmemb: number of members
 * @size: array size
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*(p + i) = 0;
	return ((void *)(p));
}

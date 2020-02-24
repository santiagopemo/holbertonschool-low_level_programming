#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @dest: fill memory area
 * @src: destination memory area
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src +i);
		i++;
	}
	return (dest);
}

#include "holberton.h"

/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer to memory
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	for (i = 0; i < old_size; i++)
		*(new + i) = *((char *)ptr + i);
	free(ptr);
	return (new);
}

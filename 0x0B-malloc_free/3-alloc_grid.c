#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width
 * @height: height
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)(malloc(sizeof(int *) * height));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(p + i) = (int *)malloc(sizeof(int) * width);
		if (*(p + i) == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(*(p + i));
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			*(*(p + i) + j) = 0;
		}

	}
	return (p);

}

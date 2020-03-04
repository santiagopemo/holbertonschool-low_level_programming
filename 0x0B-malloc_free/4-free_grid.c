#include "holberton.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid
 * @height: height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	for (height -= 1; height >= 0; height--)
		free(*(grid + height));
	free(grid);
}

#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @grid: number
 * @height: number
 *
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

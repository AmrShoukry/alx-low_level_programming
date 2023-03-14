#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @width: number
 * @height: number
 *
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int **strMalloc;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	strMalloc = malloc(sizeof(int) * (width * height));

	if (strMalloc == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				strMalloc[i][j] = 0;
			}
		}
		return (strMalloc);
	}
}

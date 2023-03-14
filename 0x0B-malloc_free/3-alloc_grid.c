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

	strMalloc = (int **)malloc(sizeof(int) * height);

	if (strMalloc == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			strMalloc[i] = (int *) malloc(sizeof(int) * width);
			if (strMalloc[i] == NULL)
			{
				free(strMalloc);
				for (j = 0; j <= i; j++)
				{
					free(strMalloc[j];
				}
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				strMalloc[i][j] = 0;
			}
		}
		return (strMalloc);
	}
}

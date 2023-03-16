#include <stdlib.h>
#include "main.h"

/**
 * array_range - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @min: number
 * @max: number
 *
 * Return: Always 0 (Success)
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(max - min + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = min; i <= max; i++)
		{
			ptr[i - min] = i;
		}

		return (ptr);
	}
}

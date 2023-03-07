#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 *
 * Description: 'Function'
 *
 * @a: array
 * @size: int
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i + j];
				sum2 += a[i + j];
			}

			if (i + j == size - 1)
			{
				sum2 += a[i + j];
			}
		}
	}

	printf("%d, %d\n", sum1, sum2);
}

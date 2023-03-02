#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 *
 * Description: 'Function'
 *
 * @a: number
 * @n: number
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int half = n / 2;
	int i, temp;

	for (i = 0; i < half; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + (n - i));
		*(a + (n - i)) = temp;
	}
}

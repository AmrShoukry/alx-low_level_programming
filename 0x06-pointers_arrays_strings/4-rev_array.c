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
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + (n - i));
		*(a + (n - i)) = temp;
	}
}

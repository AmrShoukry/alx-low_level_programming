#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *
 * Description: 'Function'
 *
 * @a: pointer1
 * @b: pointer2
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

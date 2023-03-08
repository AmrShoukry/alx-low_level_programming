#include "main.h"
#include <stdio.h>

/**
 * factorial - check the code
 *
 * Description: 'Function'
 *
 * @n: number
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

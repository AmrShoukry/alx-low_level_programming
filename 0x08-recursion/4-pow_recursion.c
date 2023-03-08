#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - check the code
 *
 * Description: 'Function'
 *
 * @x: n1
 * @y: n2
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, --y));
}

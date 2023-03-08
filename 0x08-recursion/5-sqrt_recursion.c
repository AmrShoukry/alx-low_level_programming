#include "main.h"
#include <stdio.h>

/**
 * sqrt_check - check the code
 *
 * Description: 'Function'
 *
 * @n: number
 * @checker: number
 *
 * Return: Always 0.
 */

int sqrt_check(int n, int checker)
{
	if (checker <= n)
	{
		if (checker * checker == n)
		{
			return (checker);
		}
		else
		{
			return (sqrt_check(n, checker + 1));
		}
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - check the code
 *
 * Description: 'Function'
 *
 * @n: number
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	return (sqrt_check(n, 1));
}

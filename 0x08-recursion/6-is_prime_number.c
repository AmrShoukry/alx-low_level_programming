#include "main.h"
#include <stdio.h>

/**
 * prime_check - check the code
 *
 * Description: 'Function'
 *
 * @n: number
 * @checker: number
 *
 * Return: Always 0.
 */

int prime_check(int n, int checker)
{
	if (checker < n)
	{
		if (n % checker == 0)
		{
			return (0);
		}
		else
		{
			return (prime_check(n, checker + 1));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * is_prime_number - check the code
 *
 * Description: 'Function'
 *
 * @n: number
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	return (prime_check(n, 1));
}

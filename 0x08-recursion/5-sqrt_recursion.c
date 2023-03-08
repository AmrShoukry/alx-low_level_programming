#include "main.h"
#include <stdio.h>

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
	int primes[] = prime_numbers(n);
}

int *prime_numbers(int n)
{
	int number = n;
	int prime = 2;
	int counter = 0;
	int primes[];

	while (number > 0)
	{
		if (number % prime == 0)
		{
			primes[counter] = prime;
			counter++;
			prime = 2;
			number = number / prime;
		}
		else
		{
			prime++;
		}
	}

	return (primes);
}

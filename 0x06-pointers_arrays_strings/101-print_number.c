#include "main.h"
#include <stdio.h>

/**
 * print_number - check the code
 *
 * Description: 'Function'
 *
 * @n: number
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	else if (n == 0)
	{
		_putchar('0');
	}

	if (n / 10 > 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}

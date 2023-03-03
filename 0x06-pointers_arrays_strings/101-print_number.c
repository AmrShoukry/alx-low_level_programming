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

	int n2 = n;

	if (n < 0)
	{
		_putchar('-');
		n2 = -n;
	}


	else if (n == 0)
	{
		_putchar('0');
	}

	if (n2 / 10 > 0)
	{
		print_number(n2 / 10);
		_putchar((n2 % 10) + '0');
	}
}

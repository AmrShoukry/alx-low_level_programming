#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>

/**
 * print_binary - function
 *
 * @n: header
 *
 * Description: print
 *
 * Return: Always (0);
 */

void print_binary(unsigned long int n)
{
	int length = 0;
	int i = 0;
	unsigned long int copy = n;
	unsigned long int digit;

	while (copy != 0)
	{
		copy = copy >> 1;
		length++;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = length - 1; i >= 0; i--)
	{
		digit = (n >> i) & 1;
		_putchar(digit + 48);
	}
}

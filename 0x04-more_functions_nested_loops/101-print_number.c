#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_number - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * @n: number
 *
 * Return: Always 0 (Success)
 */


void print_number(int n)
{
	int i = n;

	if (i < 0)
	{
		i = -n;
		_putchar('-');
	}

	if (i / 10 > 0)
	{
		print_number(n / 10);
	}

	_putchar(i % 10 + '0');
}

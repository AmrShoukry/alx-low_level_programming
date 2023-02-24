#include "main.h"

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

	while (i > 0)
	{
		i = i % 10;
		print_number(n / 10);
	}

	_putchar(i + '0');
}

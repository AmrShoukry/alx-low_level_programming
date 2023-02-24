#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * @n: number
 *
 * Return: Always 0 (Success)
 */


void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar(' ');
	}

	_putchar('\n');
}

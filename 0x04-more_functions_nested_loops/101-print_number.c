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
	int i;
	int reversed = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		i = n;

		if (n < 0)
		{
			_putchar('-');
			i = n * -1;
		}

		while (i > 0)
		{
			reversed = (reversed * 10) + (i % 10);
			i = i / 10;
		}
		while (reversed > 0)
		{
			_putchar(reversed % 10 + '0');
			reversed = reversed / 10;
		}
	}
}

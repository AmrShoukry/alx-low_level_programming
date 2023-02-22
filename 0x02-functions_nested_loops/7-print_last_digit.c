#include "main.h"


/**
 * print_last_digit - Entry point
 *
 * @n: number
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last;
	char l;

	if (n < 0)
	{
		n = n * -1;	
	}
	if (n == INT_MIN)
	{
		n = 88;
	}
	last = n % 10;
	l = last + '0';
	_putchar(l);
	return (last);
}

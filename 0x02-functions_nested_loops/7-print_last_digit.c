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
	int last = n % 10;
	char l = (char) last;
	_putchar(8);
	return (last);
}

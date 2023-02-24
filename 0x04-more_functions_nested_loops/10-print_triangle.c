#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * @size: number
 *
 * Return: Always 0 (Success)
 */


void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = n - i; j < n; j++)
			{
				_putchar(' ');
			}

			for (j = i; j < n; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

}

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
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = i; j < size; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

}

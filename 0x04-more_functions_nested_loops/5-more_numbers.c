#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */


void more_numbers(void)
{
	int i, j, temp;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}

		_putchar('\n');
	}
}

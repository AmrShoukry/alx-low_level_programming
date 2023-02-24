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
			temp = j;
			while (temp > 0)
			{
				_putchar(temp % 10 + '0');
				temp = temp / 10;
			}
		}

		_putchar('\n');
	}

	_putchar('\n');
}

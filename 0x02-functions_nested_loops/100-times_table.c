#include "main.h";


/**
 * main - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */

void print_time_table(int n)
{
	int i, j;

	if (n <= 15 && n > 0)
	{ 
		for (i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				_putchar(i * j);
				if (j != (n-1))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

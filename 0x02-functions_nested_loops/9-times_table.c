#include "main.h";


/**
 * main - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */

void time_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			printf("%i", i * j);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

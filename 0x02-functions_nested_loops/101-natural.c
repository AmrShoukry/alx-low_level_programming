#include "main.h";


/**
 * print_natural - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */

void print_natural(void)
{
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum = sum + i;
		}
	}

	printf("%i\n"sum);
}

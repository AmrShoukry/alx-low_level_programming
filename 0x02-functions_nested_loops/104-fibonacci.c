#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 3;
	int previous = 1;
	int current = 2;
	int temp;

	printf("%i, %i, ", previous, current);

	while (i <= 98)
	{
		temp = current;
		current = current + previous;
		previous = temp;

		if (i == 98)
		{
			printf("%i\n", current);
		}
		else
		{
			printf("%i, ", current);
		}

		i = i + 1;
	}

	return (0);
}

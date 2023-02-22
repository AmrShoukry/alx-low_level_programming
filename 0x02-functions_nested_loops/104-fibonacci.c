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
	unsigned long int previous = 1;
	unsigned long int current = 2;
	unsigned long int temp;

	printf("%lu, %lu, ", previous, current);

	while (i <= 98)
	{
		temp = current;
		current = current + previous;
		previous = temp;

		if (i == 98)
		{
			printf("%lu\n", current);
		}
		else
		{
			printf("%lu, ", current);
		}

		i = i + 1;
	}

	return (0);
}

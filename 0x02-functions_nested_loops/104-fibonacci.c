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
	long int previous = 1;
	long int current = 2;
	long int temp;

	printf("%li, %li, ", previous, current);

	while (i <= 98)
	{
		temp = current;
		current = current + previous;
		previous = temp;

		if (i == 98)
		{
			printf("%li\n", current);
		}
		else
		{
			printf("%li, ", current);
		}

		i = i + 1;
	}

	return (0);
}

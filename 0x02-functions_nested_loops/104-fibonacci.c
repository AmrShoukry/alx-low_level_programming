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
	unsigned long long int previous = 1;
	unsigned long long int current = 2;
	unsigned long long int temp;

	printf("%llu, %llu, ", previous, current);

	while (i <= 98)
	{
		temp = current;
		current = current + previous;
		previous = temp;

		if (i == 98)
		{
			printf("%llu\n", current);
		}
		else
		{
			printf("%llu, ", current);
		}

		i = i + 1;
	}

	return (0);
}

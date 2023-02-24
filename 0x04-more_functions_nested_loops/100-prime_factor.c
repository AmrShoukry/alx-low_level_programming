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
	long int i = 2;
	long int max = 1;
	long int number = 612852475143;

	while (number > 1)
	{
		if (number % i == 0)
		{
			if (i > max)
			{
				max = i;
			}
			number = number / i;
			i = 2;
		}
		else
		{
			i++;
		}
	}

	printf("%li\n", i);

	return (0);
}

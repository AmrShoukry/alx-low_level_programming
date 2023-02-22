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
	int sum = 0;
	int previous = 1;
	int current = 2;
	int temp;	

	while (sum < 4000000)
	{
		if (current % 2 == 0)
		{
			sum = sum + current;
		}

		temp = current;
		current = current + previous;
		previous = temp		
	}

	printf("%i\n", sum);

	return (0);
}

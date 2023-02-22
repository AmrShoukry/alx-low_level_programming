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
	int i;
	long numbers[50];

	for (i = 0; i < 50; i++)
	{
		if (i == 0 || i == 1)
		{
			numbers[i] = i + 1;
			printf("%li, ", numbers[i]);
		}
		else if (i != 49)
		{
			numbers[i] = numbers[i - 1] + numbers[i - 2];
			printf("%li, ", numbers[i]);
		}
		else
		{
			numbers[i] = numbers[i - 1] + numbers[i - 2];
			printf("%li\n", numbers[i]);
		}
	}

	return (0);
}

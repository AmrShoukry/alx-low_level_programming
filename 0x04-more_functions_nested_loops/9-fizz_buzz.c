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

	for (i = 1; i <= 150; i++)
	{
		if (i % 15 == 0)
		{
			if (i == 150)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("FizzBuzz ");
			}
		}

		else if (i % 5 == 0)
		{
			printf("Buzz ");
		} 

		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}

		else
		{
			printf("%i ", i);
		}
	}

	printf("\n");

	return (0);
}

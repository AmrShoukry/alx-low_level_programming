#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'Main function is used to get last number'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, L;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;

	if (L > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, L);
	}
	else if (L == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, L);
	}
	else if (L < 6 && L != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, L);
	}
	return (0);
}

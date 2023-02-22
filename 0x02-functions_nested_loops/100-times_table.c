#include "main.h"
#include <stdio.h>


/**
 * print_times_table - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * @n: number
 *
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >= 0)
	{ 
		for (i = 0; i <= n; i++)
		{
			for(j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					printf("0");
				}
				else if (i * j < 10)
				{
					printf(",   %i", i * j);
				}
				else if (i * j >= 10 && i * j < 100)
				{
					printf(",  %i", i * j);
				}
				else if (i * j >= 100)
				{
					printf(", %i", i * j);
				}
				
			}
			printf("\n");
		}
	}
}

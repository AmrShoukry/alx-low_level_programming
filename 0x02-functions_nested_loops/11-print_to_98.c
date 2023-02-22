#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%i\n", i);
			}
			else
			{
				printf("%i, ", i); 
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%i\n", i);
			}
			else
			{
				printf("%i, ", i);
			}
		}		
	}
}

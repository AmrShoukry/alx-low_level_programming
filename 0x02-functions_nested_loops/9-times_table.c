#include "main.h"
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if (j != 9)
			{
				if (j == 0)
				{
					printf("0,");
				}
				else if (i * j >= 10)
				{
					printf(" %i,", i * j);
				}
				else
				{
					printf("  %i,", i * j);
				}
			}
			else
			{
				if (i * j >= 10)
				{
					printf(" %i\n", i * j); 
				}
				else
				{
					printf("  %i\n", i * j);
				}
			}
		}
	}
}

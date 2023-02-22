#include "main.h"
#include <stdio.h>


/**
 * jack_bauer - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				printf("0%i", h);
			}
			else
			{
				printf("%i", h);
			}
			
			_putchar(':');	

			if (m < 10)
			{
				printf("0%i", m);
			}
			else
			{
				printf("%i", m);
			}
			_putchar('\n');
		}
	}
}

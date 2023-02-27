#include "main.h"
#include <stdio.h>

/**
 * print_rev - check the code
 *
 * Description: 'Function'
 *
 * @str: string
 *
 * Return: Always 0.
 */

void print_rev(char *str)
{
	int i;
	int counter = 0;
	char current = str[counter];

	while (current != '\0')
	{
		counter++;
		current = str[counter];
	}

	for (i = counter - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}

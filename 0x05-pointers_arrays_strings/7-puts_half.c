#include "main.h"
#include <stdio.h>

/**
 * puts_half - check the code
 *
 * Description: 'Function'
 *
 * @str: string
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i;
	int counter = 0;
	char current = str[counter];

	while (current != '\0')
	{
		counter++;
		current = str[counter];
	}

	for (i = (counter - 1) / 2; i < counter; i++)
	{
		printf("%c", str[counter]);
	}

	printf("\n");
}
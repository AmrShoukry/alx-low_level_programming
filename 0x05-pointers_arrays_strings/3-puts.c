#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 *
 * Description: 'Function'
 *
 * @s: string
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int counter = 0;
	char current = str[counter];

	while (current != '\0')
	{
		printf("%c", current);
		counter++;
		current = str[counter];
	}

	printf("\n");
}

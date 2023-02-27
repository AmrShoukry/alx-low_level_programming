#include "main.h"
#include <stdio.h>

/**
 * puts2 - check the code
 *
 * Description: 'Function'
 *
 * @str: string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int counter = 0;
	char current = str[counter];

	while (current != '\0')
	{
		if (counter % 2 == 0)
		{
			printf("%c", current);
		}
		counter++;
		current = str[counter];
	}

	printf("\n");
}

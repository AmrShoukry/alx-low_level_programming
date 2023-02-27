#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 *
 * Description: 'Function'
 *
 * @s: string
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, j;
	int counter = 0;
	char current = str[counter];
	char *newString;

	while (current != '\0')
	{
		printf("%c", current);
		counter++;
		current = s[counter];
	}

	j = 0;

	for (i = counter - 1; i >= 0; i--)
	{
		newString[j] = s[i];
		j++;
	}

	*s = *newString;
}

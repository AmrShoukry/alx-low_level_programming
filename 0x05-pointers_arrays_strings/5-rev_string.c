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
	char current = s[counter];
	char newString[100];

	while (current != '\0')
	{
		counter++;
		current = s[counter];
	}

	j = 0;

	for (i = counter - 1; i >= 0; i--)
	{
		newString[j] = s[i];
		j++;
	}

	for (i = 0; i < counter; i++)
	{
		s[counter] = newString[counter];
	}
}

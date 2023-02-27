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
	char temp;

	while (current != '\0')
	{
		counter++;
		current = s[counter];
	}

	j = 0;

	printf("%i", counter);

	for (i = counter - 1; i >= counter / 2; i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
	}

	for(i = 0; i < counter; i++)
	{
		printf("%c", s[i]);
	}

}

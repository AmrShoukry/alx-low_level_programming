#include "main.h"
#include <stdio.h>

/**
 * _strspn - check the code
 *
 * Description: 'Function'
 *
 * @s: string
 * @accept: character
 *
 * Return: Always 0.
 */

unsigned int(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int counter = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == s[j])
			{
				counter++;
				break;
			}

			j++;
		}

		if (accept[j] == '\0')
		{
			return (counter);
		}

		i++;
	}

	return (counter);
}

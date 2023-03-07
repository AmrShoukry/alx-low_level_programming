#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 *
 * Description: 'Function'
 *
 * @s: string
 * @accept: character
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int counter = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + counter);
			}

			j++;
		}

		counter++;
		i++;
	}

	return ("");
}

#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the code
 *
 * Description: 'Function'
 *
 * @s: string
 * @c: character
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (*c);
		}

		i++;
	}
	

	return (NULL);
}

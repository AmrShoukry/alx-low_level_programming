#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 *
 * Description: 'Function'
 *
 * @haystack: string
 * @needle: string
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int counter = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		if (haystack[i] == needle[0])
		{
			counter = i;
			while (needle[j] != '\0')
			{
				if (s[counter] != needle[j])
				{
					break;
				}

				j++;
				counter++;
			}

			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}

		i++;
	}

	return ("");
}

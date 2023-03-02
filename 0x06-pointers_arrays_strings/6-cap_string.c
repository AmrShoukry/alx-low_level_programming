#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 *
 * Description: 'Function'
 *
 * @string: string
 *
 * Return: Always 0.
 */

char *cap_string(char *string)
{
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i = 0;
	int j = 0;
	int sep = 0;

	while (string[i] != '\0')
	{
		if (i == 0 && string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = string[i] - 32;
		}

		for (j = 0; j < 13; j++)
		{
			if (string[i] == separators[j])
			{
				sep = 1;
			}
		}

		if (sep == 1 && string[i] >= 'a' && string[i] <= 'z')
		{
			sep = 0;
			string[i] = string[i] - 32;
		}

		i++;
	}

	return (string);
}

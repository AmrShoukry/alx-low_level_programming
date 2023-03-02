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

	while (string[i] != '\0')
	{
		if (i == 0 && string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = string[i] - 32;
		}

		else if (string[i] >= 'a' && string[i] <= 'z')
		{

			for (j = 0; j < 13; j++)
			{
				if (string[i - 1] == separators[j])
				{
					string[i] = string[i] - 32;
				}
			}
		}

		i++;
	}

	return (string);
}

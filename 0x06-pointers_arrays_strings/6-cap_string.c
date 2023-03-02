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
	char separators1[] = {' ', '\t', '\n', ',', ';', '.', '!', '?'};
	char separators2[] = {'"', '(', ')', '{', '}'};
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

			for (j = 0; j < 8; j++)
			{
				if (string[i - 1] == separators1[j])
				{
					string[i] = string[i] - 32;
					break;
				}
			}
			for (j = 0; j < 5; j++)
			{
				if (string[i - 1] == separators2[j])
				{
					string[i] = string[i] - 32;
					break;
				}
			}
		}

		i++;
	}

	return (string);
}

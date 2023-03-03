#include "main.h"
#include <stdio.h>

/**
 * leet - check the code
 *
 * Description: 'Function'
 *
 * @string: string
 *
 * Return: Always 0.
 */

char *leet(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		while ((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122))
		{
			if ((string[i] >= 65 && string[i] <= 77) || (string[i] >= 97 && string[i] <= 109))
			{
				string[i] += 13;
			}
			else
			{
				string[i] -= 13;
			}
		}

		i++;
	}

	return (string);
}

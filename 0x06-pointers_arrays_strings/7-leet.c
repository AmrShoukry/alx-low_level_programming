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
	char AlphaLower[] = {'a', 'e', 'o', 't', 'l'};
	char AlphaUpper[] = {'A', 'E', 'O', 'T', 'L'};
	char newNumber = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j = 0;

	while (string[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (string[i] == AlphaLower[j] || string[i] == AlphaUpper[j])
			{
				string[i] = newNumber[j];
			}
		}

		i++;
	}

	return (string);
}

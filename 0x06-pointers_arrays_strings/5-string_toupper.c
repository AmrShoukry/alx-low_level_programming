#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 *
 * Description: 'Function'
 *
 * @string: string
 *
 * Return: Always 0.
 */

char *string_toupper(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] >= 97 && string[i] <= 122)
		{
			string[i] = string[i] - 32;
		}

		i++;
	}

	return (string);
}

#include "main.h"
#include <stdio.h>

/**
 * _string_toupper - check the code
 *
 * Description: 'Function'
 *
 * @string: string
 *
 * Return: Always 0.
 */

char *string_toupper(char *string)
{
	while (*string != '\0')
	{
		if (*string >= 97 && *string <= 122)
		{
			*string -= 32;
		}

		*string++;
	}

	return (string);
}

#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 *
 * Description: 'Function'
 *
 * @s: string
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int counter = 0;
	int numberTrue = 0;
	int digitCount = 1;
	int number = 0;

	while (s[counter] != '\0')
	{
		if (numberTrue == 1 && !(s[counter] >= 48 && s[counter] <= 57))
		{
			break;
		}

		else if (numberTrue == 0 && (s[counter] >= 48 && s[counter] <= 57))
		{
			numberTrue = 1;
			number = (number * digitCount) + s[counter] - 48;
			digitCount = digitCount * 10;

			if (s[counter - 1] == '-')
			{
				number = number * -1;
			}
		}

		else if (numberTrue == 1)
		{
			number = (number * digitCount) + s[counter] - 48;
			digitCount = digitCount * 10;
		}

		counter++;
	}

	return (number);
}

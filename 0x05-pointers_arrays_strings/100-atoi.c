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
	int number;

	while (s[counter] != '\0')
	{
		if (numberTrue == 1 && !(s[counter] >= 48 && s[counter] <= 57))
		{
			break;
		}

		else if (numberTrue == 0 && (s[counter] >= 48 && s[counter] <= 57))
		{
			if (s[counter - 1] == '-')
			{
				printf("-");
			}

			printf("%c", s[counter]);
			number = s[counter] - 48;
			printf("%i", number);

			numberTrue = 1;
		}

		else if (numberTrue == 1)
		{
			printf("%c", s[counter]);
		}

		counter++;
	}

	printf("\n");

	return (0);
}

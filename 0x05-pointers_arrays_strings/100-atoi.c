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
	char current = s[counter];
	int numberTrue = 0;

	while (current != '\0')
	{
		if (numberTrue == 1 && !(current >= 48 && current <= 57))
		{
			break;
		}

		else if (numberTrue == 0 && (current >= 48 && current <= 57))
		{
			if (s[counter - 1] == '-')
			{
				printf("-");
			}

			printf("%c", current);

			numberTrue = 1;
		}

		else if (numberTrue == 1)
		{
			printf("%c", current);
		}

		counter++;
		current = s[counter];
	}

	printf("\n");
}

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
	bool number;

	while (current != '\0')
	{
		if (number == true && !(current >= 48 && current <= 57))
		{
			break;
		}

		else if (number == false && (current >= 48 && current <= 57))
		{
			if (str[counter - 1] == '-')
			{
				printf("-");
			}

			printf("%c", current);

			number = true;
		}

		else if (number == true)
		{
			printf("%c", current);
		}

		counter++;
		current = str[counter];
	}

	printf("\n");
}
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
	int digitCount = 1;
	int sign = 1;
	unsigned int num = 0;

	while (s[counter] != '\0' && !(s[counter] >= 48 && s[counter] <= 57))
	{
		if (s[counter] == '-')
		{
			sign = sign * -1;
		}
		counter++;
	}

	while (s[counter] != '\0' && (s[counter] >= 48 && s[counter] <= 57))
	{
		num = (num * digitCount) + s[counter] - 48;
		digitCount = digitCount * 10;
		counter++;
	}

	return (num * sign);
}

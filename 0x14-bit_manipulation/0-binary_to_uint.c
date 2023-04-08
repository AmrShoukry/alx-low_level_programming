#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - function
 *
 * @b: header
 *
 * Description: print
 *
 * Return: Always (0);
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i = 0;
	unsigned int len;
	unsigned int power, temp, result;

	if (b == NULL)
	{
		return (0);
	}

	len = strlen(b);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			temp = 0;
			result = 1;
			power = len - i - 1;

			while (temp < power)
			{
				result = result * 2;
				temp++;
			}


			num += (b[i] - 48) * result;
			i++;
		}
		else
		{
			return (0);
		}
	}

	return (num);
}

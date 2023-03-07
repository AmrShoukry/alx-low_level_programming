#include "main.h"
#include <stdio.h>

/**
 * infinite_add - check the code
 *
 * Description: 'Function'
 *
 * @n1: number1
 * @n2: number2
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: Always 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;

	while (c[i] != '\0')
	{
		while ((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122))
		{
			if ((c[i] >= 65 && c[i] <= 77) || (c[i] >= 97 && c[i] <= 109))
			{
				c[i] += 13;
			}
			else
			{
				c[i] -= 13;
			}
			break;
		}

		i++;
	}

	return (c);
}

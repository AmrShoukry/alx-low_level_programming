#include "main.h"
#include <stdio.h>

/**
 * leet - check the code
 *
 * Description: 'Function'
 *
 * @c: string
 *
 * Return: Always 0.
 */

char *leet(char *c)
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

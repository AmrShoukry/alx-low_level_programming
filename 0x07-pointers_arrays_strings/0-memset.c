#include "main.h"
#include <stdio.h>

/**
 * _memset - check the code
 *
 * Description: 'Function'
 *
 * @s: string
 * @b: character
 * @n: integer
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}

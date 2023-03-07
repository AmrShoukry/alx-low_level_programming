#include "main.h"
#include <stdio.h>

/**
 * _memcpy - check the code
 *
 * Description: 'Function'
 *
 * @dest: string
 * @src: character
 * @n: integer
 *
 * Return: Always 0.
 */

char *_memset(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

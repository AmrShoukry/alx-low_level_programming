#include "main.h"
#include <stdio.h>

/**
 * _strncpy - check the code
 *
 * Description: 'Function'
 *
 * @dest: string
 * @src: string
 * @n: number
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srcCounter = 0;
	int destCounter = 0;
	char current = src[srcCounter];

	dest = "";

	while (srcCounter < n && current != '\0')
	{
		srcCounter++;
		current = src[srcCounter];
	}

	for (i = 0; i < srcCounter; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

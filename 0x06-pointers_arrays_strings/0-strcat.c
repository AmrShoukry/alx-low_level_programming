#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code
 *
 * Description: 'Function'
 *
 * @dest: string
 * @src: string
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int srcCounter = 0;
	int destCounter = 0;
	char current = src[srcCounter];

	while (current != '\0')
	{
		srcCounter++;
		current = src[srcCounter];
	}

	current = dest[destCounter];

	while (current != '\0')
	{
		destCounter++;
		current = dest[destCounter];
	}

	j = 0;

	for (i = destCounter; i < destCounter + srcCounter; i++)
	{
		dest[i] = src[j];
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

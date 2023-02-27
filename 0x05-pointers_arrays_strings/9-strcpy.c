#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code
 *
 * Description: 'Function'
 *
 * @dest: string
 * @src: string
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int counter = 0;
	char current;

	while (src[counter] != '\0')
	{
		counter++;
		current = src[counter];
	}
	
	for (i = 0; i < counter; i++)
	{
		dest[i] = src[i];
	}

	return (src);
}

#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code
 *
 * Description: 'Function'
 *
 * @dest: string
 * @src: string
 *
 * Return: Always 0.
 */

int _strcmp(char *dest, char *src)
{
	int i = 0;

	while (dest[i] == src[i] && dest[i] != '\0')
	{
		i++;
	}
	
	if (dest[i] < src[i])
	{
		return (-15);
	}
	else if (dest[i] > src[i])
	{
		return (15);
	}
	else
	{
		return (0);
	}
}

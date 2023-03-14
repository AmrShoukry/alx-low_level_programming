#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @str: string
 *
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *strMalloc = malloc(sizeof(*str));

	if (str == NULL || strMalloc == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			strMalloc[i] = str[i];
		}
		return (strMalloc);
	}
}

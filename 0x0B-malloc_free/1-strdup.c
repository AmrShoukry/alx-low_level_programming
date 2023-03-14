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
	char *strMalloc;
	unsigned int i;
	unsigned int counter = 0; 

	while (str[counter] != '\0')
	{
		counter++;
	}

	strMalloc = malloc(sizeof(char) * counter);

	if (str == NULL || strMalloc == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < counter; i++)
		{
			strMalloc[i] = str[i];
		}
		return (strMalloc);
	}
}

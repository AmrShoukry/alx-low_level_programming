#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @size: number
 * @c: array
 *
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return str;
	}
}

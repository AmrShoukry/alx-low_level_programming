#include <stdio.h>
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
	int i;
	char *str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		printf("failed to allocate memory\n");
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
}

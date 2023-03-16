#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @nmemb: number
 * @size: number
 *
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < nmemb * size; i++)
		{
			ptr[i] = 0;
		}

		return (ptr);
	}
}

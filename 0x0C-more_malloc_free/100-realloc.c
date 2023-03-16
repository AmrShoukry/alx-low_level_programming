#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @ptr: pointer
 * @old_size: number
 * @new_size: number
 *
 * Return: Always 0 (Success)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newptr;
	char *oldptr = ptr;

	if (new_size == 0 && oldptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (oldptr);
	}
	if (oldptr == NULL && new_size != 0)
	{
		return (malloc(new_size));
	}
	if (old_size < new_size)
	{
		newptr = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			newptr[i] = oldptr[i];
		}
	}
	if (old_size > new_size)
	{
		newptr = malloc(new_size);
		for (i = 0; i < new_size; i++)
			newptr[i] = oldptr[i];
	}
	return (newptr);
}

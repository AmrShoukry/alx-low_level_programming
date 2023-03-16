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
	void *newptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL && new_size != 0)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			return (NULL);
		}
		else
		{
			return (newptr);
		}
	}
	if (old_size < new_size)
	{
		newptr = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			newptr[i] = ptr[i];
		}
	}
	if (old_size > new_size)
	{
		newptr = malloc(new_size);
		for (i = 0; i < new_size; i++)
		{
			newptr[i] = ptr[i];
		}
	}
}

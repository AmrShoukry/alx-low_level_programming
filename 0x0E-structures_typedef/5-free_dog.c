#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @d: number
 *
 * Return: Always 0 (Success)
 */

void free_dog(struct dog *d)
{
	if (d->name != NULL)
	{
		free(d->name);
	}

	if (d->owner != NULL)
	{
		free(d->owner);
	}

	if (d != NULL)
	{
		free(d);
	}
}

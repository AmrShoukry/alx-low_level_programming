#include <stdlib.h>
#include <string.h>
#include "dog.h"


/**
 * new_dog - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @name: number
 * @age: number
 * @owner: number
 *
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (d->name == NULL)
	{
		free (d);
		return (NULL);
	}
	
	d->owner = malloc (sizeof(char) * (strlen(owner) + 1));

	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	d->age = age;
	strcpy(d->name, name);
	strcpy(d->owner, owner);

	return (d);
}

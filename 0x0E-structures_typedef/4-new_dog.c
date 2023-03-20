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

	if (name == NULL)
	{
		return (NULL);
	}
	else
	{
		d->name = malloc(sizeof(char) * strlen(name));
		strcpy(d->name, name);
	}

	if (owner == NULL)
	{
		return (NULL);
	}
	else
	{
		d->owner = malloc(sizeof(char) * strlen(owner));
		strcpy(d->owner, owner);
	}

	d->age = age;

	return (d);
}

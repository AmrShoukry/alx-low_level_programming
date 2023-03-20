#include <stdlib.h>
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

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}

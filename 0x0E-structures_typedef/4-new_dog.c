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
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog_t d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}

#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @d: number
 * @name: number
 * @age: number
 * @owner: number
 *
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}

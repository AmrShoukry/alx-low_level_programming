#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @d: number
 *
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner = NULL ? "(nil)" : d->owner);
}

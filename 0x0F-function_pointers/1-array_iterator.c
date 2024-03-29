#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints a name as is
 *
 * @array: name of the person
 * @size: f
 * @action: a
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}

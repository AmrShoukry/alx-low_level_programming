#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - prints a name as is
 *
 * @array: name of the person
 * @size: f
 * @cmp: cmp
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int value;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		value = cmp(array[i]);
		if (value > 0)
		{
			return (i);
		}
	}

	return (-1);
}

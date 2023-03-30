#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function
 *
 * @h: header
 *
 * Description: print
 *
 * Return: Always (0);
 */


size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function
 *
 * @h: header
 *
 * Description: print
 *
 * Return: Always (0);
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}

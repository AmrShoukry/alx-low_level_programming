#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function
 *
 * @h: header
 *
 * Description: print
 *
 * Return: Always (0);
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		counter++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (counter);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function
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
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		current = current->next;
	}
	return (counter);
}

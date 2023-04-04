#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint_safe - function
 *
 * @head: header
 *
 * Description: print
 *
 * Return: Always (0);
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	if (head == NULL)
	{
		exit(98);
	}

	while (current != NULL)
	{
		printf("[%p] %i\n", (void *)current, current->n);
		current = current->next;
		count++;
	}

	return (count);
}

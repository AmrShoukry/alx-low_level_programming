#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - function
 *
 * @head: header
 * @n: number
 *
 * Description: print
 *
 * Return: Always (0);
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *tail;
	list_t *current = *head;

	tail = malloc(sizeof(list_t));

	if (tail == NULL)
	{
		return (NULL);
	}

	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = tail;

	return (tail);
}

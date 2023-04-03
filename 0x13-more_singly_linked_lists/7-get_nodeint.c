#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function
 *
 * @head: header
 * @index: number
 *
 * Description: print
 *
 * Return: Always (0);
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i != index)
	{
		current = current->next;
		if (current == NULL)
		{
			return (NULL);
		}
		i++;
	}

	return (current);
}

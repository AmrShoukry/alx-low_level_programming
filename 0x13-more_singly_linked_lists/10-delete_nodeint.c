#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function
 *
 * @head: header
 * @index: index
 *
 * Description: print
 *
 * Return: Always (0);
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *temp = *head;

	if (head == NULL || *head == NULL || current == NULL || temp == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i != index - 1)
	{
		current = current->next;
		if (current == NULL)
		{
			return (-1);
		}
		i++;
	}

	temp = current->next;
	current->next = current->next->next;
	free(temp);

	return (1);
}

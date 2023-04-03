#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function
 *
 * @head: header
 * @idx: index
 * @n: number
 *
 * Description: print
 *
 * Return: Always (0);
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL || head == NULL || *head == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	while (i != idx - 1)
	{
		current = current->next;
		i++;
	}

	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}

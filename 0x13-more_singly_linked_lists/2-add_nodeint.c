#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - function
 *
 * @head: header
 * @str: string
 *
 * Description: print
 *
 * Return: Always (0);
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *header;
	header = malloc(sizeof(listint_t));

	if (header == NULL)
	{
		return (NULL);
	}
	else
	{
		header->n = n;
		header->next = *head;
		*head = header;
	}

	return (*head);
}

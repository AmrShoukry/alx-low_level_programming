#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - function
 *
 * @head: header
 *
 * Description: print
 *
 * Return: Always (0);
 */

int pop_listint(listint_t **head)
{
	listint_t *header = *head;

	if (head == NULL)
	{
		return (0);
	}
	
	else
	{
		*head = header->next;
		header->next = NULL;
	}

	return (header->n);
}

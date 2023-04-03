#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function
 *
 * @head: header
 *
 * Description: print
 *
 * Return: Always (0);
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}

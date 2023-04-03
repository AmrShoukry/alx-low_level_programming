#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function
 *
 * @head: header
 *
 * Description: print
 *
 * Return: Always (0);
 */


void free_list(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function
 *
 * @head: header
 *
 * Description: print
 *
 * Return: Always (0);
 */


void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

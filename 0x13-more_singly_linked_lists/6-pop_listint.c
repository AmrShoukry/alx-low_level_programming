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
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

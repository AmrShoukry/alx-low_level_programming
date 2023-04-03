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
	int num;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	*head = (*head)->next;

	return (num);
}

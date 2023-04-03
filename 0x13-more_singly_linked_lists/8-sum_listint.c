#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - function
 *
 * @head: header
 *
 * Description: print
 *
 * Return: Always (0);
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (head == NULL)
	{
		return (sum);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

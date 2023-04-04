#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * reverse_recursion - function
 *
 * @current: current
 * @newHead: head
 *
 * Description: print
 *
 * Return: Always (0);
 */



listint_t *reverse_recursion(listint_t *current, listint_t **newHead)
{
	listint_t *returned_current = NULL;

	if (current->next == NULL)
	{
		*newHead = current;
		return (current);
	}
	else
	{
		(returned_current) = reverse_recursion(current->next, newHead);
		(returned_current)->next = current;
		current->next = NULL;
		return (current);
	}
}
/**
 * reverse_listint - function
 *
 * @head: header
 *
 * Description: print
 *
 * Return: Always (0);
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *newHead = NULL;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	else
	{
		reverse_recursion(*head, &newHead);
		*head = newHead;
		return (*head);
	}
}



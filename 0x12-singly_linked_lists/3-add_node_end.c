#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function
 *
 * @head: header
 * @str: string
 *
 * Description: print
 *
 * Return: Always (0);
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	list_t *current = *head;
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	tail = malloc(sizeof(list_t));

	if (tail == NULL)
	{
		return (NULL);
	}
	else
	{
		tail->str = strdup(str);
		tail->len = i;
		tail->next = NULL;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = tail;
	}

	return (tail);
}

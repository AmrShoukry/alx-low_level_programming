#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function
 *
 * @head: header
 * @str: string
 *
 * Description: print
 *
 * Return: Always (0);
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *header = NULL;
	unsigned int i = 0;

	header = malloc(sizeof(list_t));

	if (!header)
	{
		return (NULL);
	}
	else
	{
		header->str = strdup(str);
		while (header->str[i] != '\0')
		{
			i++;
		}
		header->len = i;
		header->next = *head;
		*head = header;
	}

	return (*head);
}

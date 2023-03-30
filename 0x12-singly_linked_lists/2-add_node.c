#include <stdlib.h>
#include <stdio.h>
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


list_t *add_node(list_t **header, const char *str)
{
	const list_t *head = NULL;

	head = (list_t *) malloc(sizeof(list_t));

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		head->str = str;
		head->next = *header;
		*header = head;
	}

	return (*header);
}

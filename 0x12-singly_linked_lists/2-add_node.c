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


list_t *add_node(list_t **header, const char *str)
{
	list_t *head = NULL;
	unsigned int i = 0;

	head = (list_t *) malloc(sizeof(list_t));

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		head->str = strdup(str);
		while (head->str[i] != '\0')
		{
			i++;
		}
		head->len = i;
		head->next = *header;
		*header = head;
	}

	return (*header);
}

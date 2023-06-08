#include "hash_tables.h"

/**
 * hash_table_print - Function
 *
 * Description: 'A function'
 *
 * @ht: parameter
 *
 * Return: return value
 */


void hash_table_print(const hash_table_t *ht)
{
	int first_ocuurence = 0;
	unsigned long int i = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");

	while (i < ht->size)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (first_ocuurence == 0)
			{
				first_ocuurence = 1;
				printf("'%s': '%s'", node->key, node->value);
			}
			else
				printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
			i++;
		}
	}

	printf("}\n");
}

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
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		else
		{
			node = ht->array[i];
			if (first_ocuurence == 0)
			{
				first_ocuurence = 1;
				printf("'%s': '%s' i = %lu\n", node->key, node->value, i);
				node = node->next;
			}
			while (node != NULL)
			{
				printf(", '%s': '%s' i = %lu\n", node->key, node->value, i);
				node = node->next;
			}
			i++;
		}
	}

	printf("}\n");
}

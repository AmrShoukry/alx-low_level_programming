#include "hash_tables.h"

/**
 * hash_table_set - Function
 *
 * Description: 'A function'
 *
 * @ht: parameter
 * @key: parameter
 * @value: parameter
 *
 * Return: return value
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *temp;
	char *key_copy = strdup(key);
	char *value_copy = strdup(value);

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(key_copy);
				free(new_node);
				free(temp->value);
				temp->value = value_copy;
				break;
			}
			temp = temp->next;
		}
		if (temp == NULL)
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
	}
	return (1);
}

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

    if (key == NULL || value == NULL || ht == NULL)
        return (0);
    
    index = key_index((const unsigned char *)key, ht->size);
    new_node = malloc(sizeof(hash_node_t *));
    new_node->key = (char *)key;
    new_node->value = (char *)value;
    new_node->next = NULL;

    if (ht->array[index] == NULL)
    {
        ht->array[index] = new_node;
    }
    else
    {
        new_node->next = ht->array[index];
        ht->array[index] = new_node;
    }
    return (1);
}
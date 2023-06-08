#include "hash_tables.h"

/**
 * shash_table_create - Function
 *
 * Description: 'A function'
 *
 * @size: parameter
 *
 * Return: return value
 */

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *new_hash_table = malloc(sizeof(shash_table_t));

    if (new_hash_table == NULL)
        return (NULL);

    new_hash_table->array = calloc(size + 1, sizeof(shash_node_t *));

    if (new_hash_table->array == NULL)
    {
        free(new_hash_table);
        return (NULL);
    }

    new_hash_table->size = size + 1;
    new_hash_table->shead = NULL;
    new_hash_table->stail = NULL;

    return (new_hash_table);
}







/**
 * shash_table_set - Function
 *
 * Description: 'A function'
 *
 * @ht: parameter
 * @key: parameter
 * @value: parameter
 *
 * Return: return value
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *temp;
    char *key_copy = strdup(key);
    char *value_copy = strdup(value);

    if (key == NULL || value == NULL || ht == NULL)
        return (0);   
    index = key_index((const unsigned char *)key, ht->size - 1);
    new_node = malloc(sizeof(shash_node_t));
    new_node->key = key_copy;
    new_node->value = value_copy;
    new_node->next = NULL;

    if (ht->array[index] == NULL)
    {
        ht->array[index] = new_node;
    }
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
                return (1);
            }
            temp = temp->next;
        }
        if (temp == NULL)
        {
            new_node->next = ht->array[index];
            ht->array[index] = new_node;
        }
    }
    shash_sorted_list(ht, new_node);
    return (1);
}



void shash_sorted_list(shash_table_t *ht, shash_node_t *sent_node)
{
    shash_node_t *current;
    shash_node_t *temp;
    shash_node_t *new_node;

    new_node = malloc(sizeof(shash_node_t));
    new_node->key = strdup(sent_node->key);
    new_node->value = strdup(sent_node->value);
    new_node->next = NULL;
    new_node->snext = NULL;
    new_node->sprev = NULL;
    if (ht->array[ht->size - 1] == NULL)
    {
        ht->array[ht->size - 1] = new_node;
        sent_node->snext = NULL;
        sent_node->sprev = NULL;
    }
    else
    {
        current = ht->array[ht->size - 1];
        temp = current;
        if((int)new_node->key[0] < (int)current->key[0])
        {
            new_node->next = ht->array[ht->size - 1];
            ht->array[ht->size - 1] = new_node;
            return;
        }
        current = current->next;
        while (current != NULL)
        {
            if((int)new_node->key[0] < (int)current->key[0])
            {
                temp->next = new_node;
                new_node->next = current;
                return;
            }
            temp = current;
            current = current->next;
        }
        temp->next = new_node;
    }
}






/**
 * shash_table_get - Function
 *
 * Description: 'A function'
 *
 * @ht: parameter
 * @key: parameter
 *
 * Return: return value
 */


char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *wanted_node;

    if (key == NULL || ht == NULL)
    {
        return (NULL);
    }
    index = key_index((const unsigned char *)key, ht->size - 1);

    if (ht->array[index] == NULL)
    {
        return (NULL);
    }

    wanted_node = ht->array[index];

    while (wanted_node != NULL)
    {
        if (strcmp(wanted_node->key, key) == 0)
            return wanted_node->value;
        wanted_node = wanted_node->next;
    }
    return (NULL);
}




/**
 * shash_table_print - Function
 *
 * Description: 'A function'
 *
 * @ht: parameter
 *
 * Return: return value
 */


void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;
    int found = 0;

    if (ht == NULL)
        return;
    
    node = ht->array[ht->size - 1];

    printf("{");
    while (node != NULL)
    {
        if (found == 0)
        {
            printf("'%s': '%s'", node->key, node->value);
            found = 1;
        }
        else
            printf(", '%s': '%s'", node->key, node->value);
/*
        if (strcmp(node->key, "j") == 0)
            exit(0);
        else
            printf("key: %s\n\n", node->key);
*/
        node = node->next;

    }
    printf("}\n");
}


/**
 * shash_table_print_rev - Function
 *
 * Description: 'A function'
 *
 * @ht: parameter
 *
 * Return: return value
 */


void shash_table_print_rev(const shash_table_t *ht)
{
    if (ht == NULL)
        return;

    printf("{");

    print_recursive(ht->array[ht->size - 1]);

    printf("}\n");
}




/**
 * print_recursive - Function
 *
 * Description: 'A function'
 *
 * @node: parameter
 *
 * Return: return value
 */


void print_recursive(shash_node_t *node)
{
    if (node->next == NULL)
    {
        printf("'%s': '%s'", node->key, node->value);
        return;
    }

    print_recursive(node->next);

    printf(", '%s': '%s'", node->key, node->value);
}




/**
 * hash_table_print - Function
 *
 * Description: 'A function'
 *
 * @ht: parameter
 *
 * Return: return value
 */


void shash_table_delete(shash_table_t *ht)
{
    long unsigned int i = 0;
    shash_node_t *node;
    shash_node_t *temp;

    if (ht == NULL)
        return;

    while (i < ht->size)
    {
        node = ht->array[i];
        while (node != NULL)
        {
            free(node->key);
            free(node->value);
            temp = node;
            node = node->next;
            temp->next = NULL;
            free(temp);
        }
        i++;
    }
    free(ht->array);
    free(ht);
}

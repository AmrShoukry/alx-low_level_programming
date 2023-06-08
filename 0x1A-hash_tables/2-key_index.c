#include "hash_tables.h"

/**
 * key_index - Function
 *
 * Description: 'A function'
 *
 * @key: parameter
 * @size: parameter
 *
 * Return: return value
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t arr;

	index = key_index(key, ht->size);
	arr = ht->array;
	if (!arr)
		return (0);
	if (!index)
		return (0);
	if (arr[index])
		return (0);
	arr[index]->key = key;
	arr[index]->value = value;
	return (1);
}

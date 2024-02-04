#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (strcmp(key, "") == 0)
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);
	node = ht->array[idx];
	
	if (node == NULL)
		return (NULL);
	
	while (node && strcmp(key, node->key) != 0)
		node = node->next;

	return (node->value);
}

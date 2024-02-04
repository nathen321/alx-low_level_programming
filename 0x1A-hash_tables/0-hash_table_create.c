#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 * @size: size of table
 *
 * Return: hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x
	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t **arr = malloc(sizeof(hash_node_t) * size);

	if (table == NULL)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		(return NULL);
	}
	for (; x < size; ++x)
		arr[x] = NULL;
	table->size = size;
	table->array = arr;
	return (hash_table_t);

}

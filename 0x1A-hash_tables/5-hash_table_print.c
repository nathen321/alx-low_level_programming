#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - check the code
 * @ht: ....
 *
 * Return: NADA
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node;
	char c = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (; idx < ht->size; ++idx)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			if (c == 1)
				printf(", ");

			printf("'%s' : '%s'", node->key, node->value);
			c = 1;
			node = node->next;
		}

	}
	printf("}\n");
}

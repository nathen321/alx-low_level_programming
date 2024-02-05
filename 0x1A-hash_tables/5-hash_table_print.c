#include <stdlib.h>
#include <string.h>
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
	int c = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (; idx < ht->size; ++idx)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			if (c == 1)
				printf(", ");

			c = 1;
			printf("'%s' : '%s'", (char *) node->key, (char *) node->value);
			node = node->next;
		}

	}
	printf("}\n");
}

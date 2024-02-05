#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node;
	int commas = 0;

	printf("{");
	for (; idx < ht->size; ++idx)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			if (commas == 1)
				printf(", ");

			commas = 1;
			printf("%s : %s", node->key, node->value);
			node = node->next;
		}

	}
	printf("}\n");
}

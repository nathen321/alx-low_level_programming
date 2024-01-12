#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - check the code
 * @head: node
 *
 * Return: Always node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *now = head, *next;

	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
}

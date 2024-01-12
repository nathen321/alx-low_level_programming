#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - check the code
 * @head: node
 * @n: value
 *
 * Return: Always node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nod = head;
	int num = 0;

	while (num != index)
	{
		nod = nod->next;
		num += 1;
	}
	return (nod);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 * @head: node
 * @index: value
 *
 * Return: Always node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nod = head;
	int num = 0;

	while (nod)
	{
		if (num == index)
		{
			return (nod);
		}
		nod = nod->next;
		num += 1;
	}
	return (NULL);
}

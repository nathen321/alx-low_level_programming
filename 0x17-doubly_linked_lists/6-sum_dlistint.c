#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - check the code
 * @head: node
 *
 * Return: Always node.
 */
int sum_dlistint(dlistint_t *head);
{
	dlistint_t *nod = head;
	int num = 0;

	if (head)
	{
		while (nod)
		{
			num += nod->n;
			nod = nod->next;
		}
		return (num);
	}
	else
	{
	return (0);
	}
}

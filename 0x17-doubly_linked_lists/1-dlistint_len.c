#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: node
 *
 * Return: Always int.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num += 1;
		h = h->next;
	}
	return (num);
}

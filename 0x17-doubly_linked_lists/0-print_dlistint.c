#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: node
 *
 * Return: Always int.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num += 1;
		h = h->next;
	}
	return (num);
}

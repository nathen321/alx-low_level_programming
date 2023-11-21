#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code
 * @h: ....
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			count++;
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (count);
}

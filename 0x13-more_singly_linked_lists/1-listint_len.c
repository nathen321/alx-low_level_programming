#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - check the code
 * @h: ....
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}

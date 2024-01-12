#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @h: node
 * @idx: value
 * @n: .....
 *
 * Return: Always node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *new_node = NULL;
	unsigned int iter_times = 0, length = 0;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	length = dlistint_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (length == idx)
		return (add_dnodeint_end(h, n));

	current = *h;
	while (current != NULL)
	{
		if (iter_times == idx)
		{
			new_node = create_node(n, current, current->prev);
			current->prev = new_node;
			current = new_node;
			current->prev->next = new_node;
			return (new_node);
		}

		current = current->next;
		++iter_times;
	}

	return (current);
}

/**
  * dlistin - ................
  * @h: ..............
  *
  * Return: ..............
  */
size_t dlistin(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}

	return (lenght);
}

/**
  * create - ........
  * @n: ..................
  * @next: ..............
  * @prev: .............
  *
  * Return: ..........
  */
dlistint_t *create(unsigned int n, void *next, void *prev)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = next;
	new_node->prev = prev;
	return (new_node);
}

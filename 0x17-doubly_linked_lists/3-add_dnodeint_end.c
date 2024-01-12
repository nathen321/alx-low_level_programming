#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: node
 * @n: value
 *
 * Return: Always node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *now = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head)
	{
		now = *head
		while (now->next != NULL)
		{
			now = now->next;
		}
		new->prev = now;
		new->next = NULL;
		now->next = new
		return (new);
	}
	new->prev = NULL;
	new->next = *head;
	(*head) = new;
	return (*head);
}

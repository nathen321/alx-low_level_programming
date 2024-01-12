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
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head)
	{
		new->prev = NULL;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (*head)
	}
	new->prev = NULL;
	new->next = *head;
	*head = new;
        return (*head)
}

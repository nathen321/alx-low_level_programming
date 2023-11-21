#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - check the code
 * @head: ....
 * @n: ....
 * Return: Always head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (head != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	if (head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
	}
	return (new);
}

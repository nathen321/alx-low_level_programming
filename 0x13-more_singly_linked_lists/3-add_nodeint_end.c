#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: ....
 * @n: ....
 * Return: Always head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}

		temp = *head;
		while (temp->next)
			temp = temp->next;

		temp->next = new;
		return (new);
	}
	return (NULL);
}

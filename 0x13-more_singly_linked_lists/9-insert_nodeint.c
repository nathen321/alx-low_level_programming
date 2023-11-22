#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 * @head: ...
 * @idx: ....
 * @n: ....
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	temp = *head;
	while (i < (idx - 1))
	{
		if (temp)
		{
			temp = temp->next;
			i++;
		}
		else
		{
		return (NULL);
		}
	}
	new->next = temp->next;
	temp->next = new;
	return (temp);
}

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
	unsigned int i = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = NULL;
		temp = *head;
		if (idx > 0)
		{
			while (i < idx)
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
		}
		else
		{
			new->next = *head;
			*head = new;
		}
	}
		return (new);
}

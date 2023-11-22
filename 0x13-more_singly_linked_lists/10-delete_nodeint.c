#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @head: ...
 * @index: ....
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *swap;
	unsigned int i = 1;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			swap = temp->next;
			temp->next = swap->next;
			free(swap);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}

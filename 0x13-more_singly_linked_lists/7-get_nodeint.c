#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @head: ...
 * @index: ....
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (i < index)
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
	return (temp);
}

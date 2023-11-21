#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - check the code
 * @head: ....
 * Return: Always head.
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		if (head->next)
		{
			free_listint(head->next);
		}
		free(head);
	}
}

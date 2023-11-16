#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - check the code
 * @head: ....
 * @str: ...
 *
 * Return: Always.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;
	}
	if (*head == NULL)
	{
		*head  = new;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;


		temp->next = new;
	
		return (temp);
	}

	return (NULL);
}

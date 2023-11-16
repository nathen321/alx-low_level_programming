#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - check the code
 * @head: ....
 * @str: ...
 *
 * Return: Always.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;

		*head = new;

		return (new);
	}

	return (0);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code
 * @head: ...
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int tam;

	if (head)
	{
		temp = (*head)->next;
		tam = (*head)->n;
		free(head);
		*head = temp;
	}
	return (tam);
}

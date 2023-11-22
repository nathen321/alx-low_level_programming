#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - check the code
 * @head: ...
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int i = 0;

	temp = head;
	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}

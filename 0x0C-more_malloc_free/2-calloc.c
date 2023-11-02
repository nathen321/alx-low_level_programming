#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: number of element in arrey
 * @size: the size of the memory to print
 *
 * Return: arrey.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}

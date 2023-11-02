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
	char *tam;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tam = malloc(nmemb * size);
	if (tam== NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		tam[i] = 0;
		i++;
	}
	return (tam);
}

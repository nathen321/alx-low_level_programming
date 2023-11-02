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
	unsigned int count = 0, j;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	ptr = malloc(j);
	if (ptr == NULL)
		return (NULL);
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- create an array
 * @c: content of th e array
 * @size: the size of the memory to print
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int x;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(t) * size);
	if (t == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		t[x] = c;
	return (t);
}

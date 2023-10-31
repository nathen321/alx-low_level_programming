#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup- create an array
 * @str: content of the array
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *t;
	unsigned int x;

	t = malloc(sizeof(char) * strlen(str));
	if (t == NULL)
		return (NULL);
	for (x = 0; x < strlen(str); x++)
		t[x] = str[x];
	return (t);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat- create an array
 * @str: content of the array
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2);
{
	char *t;
	unsigned int x;

	if (str == NULL)
		return (NULL);
	t = malloc((sizeof(char) * (strlen(s2) + strlen(s1))) + 1);
	if (t == NULL)
		return (NULL);
	for (x = 0; x < strlen(s1); x++)
		t[x] = s1[x];
	for (x = 0; x < strlen(s2); x++)
		t[x] = s2[x];
	t[x] = '\0';
	return (t);
}

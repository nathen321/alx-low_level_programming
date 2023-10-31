#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat- create an array
 * @s1: content of the array
 * @s2: content of the array
 * Return: array.
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	unsigned int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s1 = "";
	t = malloc((sizeof(char) * (strlen(s2) + strlen(s1))) + 1);
	if (t == NULL)
		return (NULL);
	for (x = 0; x < strlen(s1); x++)
		t[x] = s1[x];
	for (y = 0; y < strlen(s2); x++)
	{
		t[x] = s2[y];
		y++;
	}
	t[x] = '\0';
	return (t);
}

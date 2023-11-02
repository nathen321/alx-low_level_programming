#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int v, x, y, z, s;
	char *t;

	v = sizeof(s1) - 1;
	x = sizeof(s2) - 1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (x <= n)
		s = x;
	else
		s = n;
	t = malloc(sizeof(char) * (v + s - 1));
	if (t == NULL)
		return ("");
	for (y = 0; y < v - 2; y++)
	{
		t[y] = s1[y];
	}
	for (z = 0; z < s; y++)
	{
		t[y] = s2[z];
		z++;
	}
	return (t);
}

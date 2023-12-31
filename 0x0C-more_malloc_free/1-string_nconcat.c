#include "main.h"

/**
 * string_nconcat - check the code
 * @s1: par
 * @s2: par
 * @n: par
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int v = 0, y, z;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[v])
		v++;

	t = malloc(sizeof(*t) * (v + n + 1));

	if (t == NULL)
		return (NULL);

	for (y = 0; y < v; y++)
	{
		t[y] = s1[y];
	}
	for (z = 0; z < n; y++)
	{
		t[y] = s2[z];
		z++;
	}
	t[y] = '\0';
	return (t);
}

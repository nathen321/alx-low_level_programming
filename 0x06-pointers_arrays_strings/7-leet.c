#include "main.h"
/**
 * *leet - concatenates two strings.
 * @n: argument 1
 * Return: char
 */
char *leet(char *n)
{
	int x, y;
	char z1[] = "aAeEoOtTlL";
	char z2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; z1[y] != '\0'; y++)
			if (n[x] == z1[y])
				n[x] = z2[y];
	}
	return (n);
}

#include "main.h"
/**
 * *string_toupper - concatenates two strings.
 * @*: argument 1
 * Return: char
 */
char *string_toupper(char *n)
{
	int x = 0;

	while (n[x] != '\0')
	{
		if (n[x] >= 97 && n[x] <= 122)
		{
			n[x] -= 32;
		}
		x++;
	}
	return (n);
}

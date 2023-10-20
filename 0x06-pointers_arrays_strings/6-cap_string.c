#include "main.h"
/**
 * *cap_string - concatenates two strings.
 * @n: argument 1
 * Return: char
 */
char *cap_string(char *n)
{
	int x = 0;

	while (n[x] != '\0')
	{
		if (n[x] == '\n' || n[x] == ' ' || n[x] == '.')
		{
			if (n[x + 1] >= 97 && n[x + 1] <= 122)
			{
				n[x + 1] -= 32;
			}
		}
		x++;
	}
	return (n);
}

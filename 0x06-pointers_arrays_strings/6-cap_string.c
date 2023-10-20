#include "main.h"
/**
 * *cap_string - concatenates two strings.
 * @n: argument 1
 * Return: char
 */
char *cap_string(char *n)
{
	int x = 0;

	while (n[x])
	{
		if (n[x - 1] == '\n' || n[x - 1] == ' ' || n[x - 1] == '.' || n[x - 1] == '\t' || n[x - 1] == '?' || n[x - 1] == ',' || n[x - 1] == ';' || n[x - 1] == '!' || n[x - 1] == '"' || n[x - 1] == '(' || n[x - 1] == ')' || n[x - 1] == '{' || n[x - 1] == '}' || x == 0)
		{
			if (n[x] >= 97 && n[x] <= 122)
			{
				n[x] -= 32;
			}
		}
		x++;
	}
	return (n);
}

#include "main.h"

/**
  * *_strpbrk - search for the firdt ocurance acc in s
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int z = 0, x;

	while (s[z])
	{
		x = 0;

		while (accept[x])
		{
			if (accept[z] == s[x])
			{
				s  += z + 1;
				return (s);
			}
			x++;
		}

		z++;
	}

	return ('\0');
}

#include "main.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int z = 0, x, y = 0;

	while (accept[z])
	{
		x = 0;

		while (s[x] != 32)
		{
			if (accept[z] == s[x])
			{
				y++;
			}

			x++;
		}

		z++;
	}

	return (y);
}

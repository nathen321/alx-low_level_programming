#include "main.h"
/**
 * _strlen - counte the lenght of a string
 * @s: the string
 * returne: 0
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}

#include "main.h"
/**
 * _strlen - counte the lenght of a string
 * @s: the string
 * Return: string length
 */
int _strlen(char *s)
{
	int len  = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}

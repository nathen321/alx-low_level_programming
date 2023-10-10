#include "main.h"
/**
 * _islower - check for lower case char
 *
 * Return: 1 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

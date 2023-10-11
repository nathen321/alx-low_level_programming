#include "main.h"
/**
 * _islower - check for lower case char
 *
 * @c: is the what wil be tested
 *
 * Return: 1 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

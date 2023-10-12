#include "main.h"
/**
 * _isupper - check for upper case char
 *
 * @c: is the what wil be tested
 *
 * Return: 1 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

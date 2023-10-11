#include "main.h"
/**
 * _isalpha - check for lower case char
 *
 * @c: is what wil be tested
 *
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}

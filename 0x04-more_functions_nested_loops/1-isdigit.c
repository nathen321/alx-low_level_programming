#include "main.h"
/**
 * _isdigit - check for digit
 *
 * @c: is the what wil be tested
 *
 * Return: 1 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

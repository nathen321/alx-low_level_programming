#include "main.h"

/**
  * _pow_recursion - returns x raised to the power of y
  * @x: arg1
  * @y: arg2
  *
  * Return: the value multiplied y times
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

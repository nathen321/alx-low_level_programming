#include <stdio.h>
#include "calc.h"
#include <stdlib.h>

/**
 * op_add - add  nums
 * @a: num1
 * @b: num2
 * Return: ...
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - add  nums
 * @a: num1
 * @b: num2
 * Return: ...
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - add  nums
 * @a: num1
 * @b: num2
 * Return: ...
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - add  nums
 * @a: num1
 * @b: num2
 * Return: ...
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}
/**
 * op_mod - add  nums
 * @a: num1
 * @b: num2
 * Return: ...
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

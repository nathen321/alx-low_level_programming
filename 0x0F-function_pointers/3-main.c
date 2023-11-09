#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */

int main(int argc, char *argv[])
{
	int (*operate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operate = get_op_func(argv[2]);

	if (!operate)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operate(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

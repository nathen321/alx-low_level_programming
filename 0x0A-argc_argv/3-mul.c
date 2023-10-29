#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * main - print the commend used
  * @argc: cont
  * @argv: commend
  * Return: alway 0
  */
int main(int argc, char *argv[])
{
	int n1, n2;
	(void) argc;

	if (argv[1] && argv[2])
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

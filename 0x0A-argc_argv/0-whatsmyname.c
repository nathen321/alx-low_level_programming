#include <stdio.h>
#include "main.h"

/**
 * main - print the commend used
 * @argc: cont
 * @argv: commend
 * return: void
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%s\n", argv[1]);
	else
		return (1);
	return (0);
}

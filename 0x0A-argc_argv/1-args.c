#include <stdio.h>
#include "main.h"

/**
  * main - print the commend used
  * @argc: cont
  * @argv: commend
  * Return: alway 0
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

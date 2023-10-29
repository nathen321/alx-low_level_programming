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
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}

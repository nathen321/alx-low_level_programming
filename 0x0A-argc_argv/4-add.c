#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * main - print the commend used
  * @argc: cont
  * @argv: commend
  * Return: alway 0
  */
int main(int argc, char *argv[])
{
	int i;
	unsigned int e, sum = 0;
	char *num;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = argv[i];
			for (e = 0; e < strlen(num); e++)
			{
				if (num[e] > 57 && num[e] < 48)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(num);
			num++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
		return (0);
	}
	return (0);
}

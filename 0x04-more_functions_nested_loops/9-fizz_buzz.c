#include <stdio.h>
/**
 * main - A program that prints the numbers from 1 to 100
 * retur: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			 printf("Buzz ");
		}
		else
		{
			printf("%u ", i);
		}
	}
	printf("\n");
	return (0);
}

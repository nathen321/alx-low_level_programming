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
			printf("FizzBuzz\n");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz\n");
		}
		else if ((i % 5) == 0)
		{
			 printf("Buzz\n");
		}
		else
		{
			printf("%u\n", i);
		}
	}
	printf("\n");
	return (0);
}

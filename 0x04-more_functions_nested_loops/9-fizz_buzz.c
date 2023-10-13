#include <stdio.h>
/**
 * FizzBuzz - A program that prints the numbers from 1 to 100
 */
void FizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			 printf("Buzz ");
		else
			printf("%d "; i);
	}
}

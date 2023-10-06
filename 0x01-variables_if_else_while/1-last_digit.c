#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print wether the last digit stored in
 *the variable n is bigger or smaller than five
 * Return: Alway 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("Last digit of %d and is 0\n", n);
	else if (n > 5)
		printf("Last digit of %d and is greater than 5\n", n);
	else if (n < 6)
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	return (0);
}

#include <stdio.h>
/**
 * main - Prints all single digit numbers of base ten starting from zero
 *, followed by a new line.
 * Return: Always 0.
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	putchar('\n');

	return (0);
}

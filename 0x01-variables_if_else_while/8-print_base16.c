#include <stdio.h>
/**
 * main - Prints from A to Z.
 * Return: Always 0.
*/
int main(void)
{
	int num;

	char alph;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}

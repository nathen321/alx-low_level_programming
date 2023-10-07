#include <stdio.h>
/**
 * main - Prints from A to Z.
 * Return: Always 0.
*/
int main(void)
{
	char alph;

	for (alph = 122; alph >= 97; alph--)
		putchar(alph);
	putchar('\n');

	return (0);
}

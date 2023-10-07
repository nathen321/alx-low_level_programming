#include <stdio.h>
/**
 * main - Prints from A to Z.
 * Return: Always 0.
*/
int main(void)
{
	char alph = 97;

	for (alph = 97; alph <= 122; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - Prints from A to Z.
 * Return: Always 0.
*/
int main(void)
{
	char alph;

	char alphcap;

	for (alph = 97; alph <= 122; alph++)
		putchar(alph);
	for (alphcap = 'A'; alphcap <= 'Z'; alphcap++)
		putchar(alphcap);
	putchar('\n');

	return (0);
}

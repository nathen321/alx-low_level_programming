#include <stdio.h>
/**
 * main - Prints from A to Z but q and z.
 * Return: Always 0.
*/
int main(void)
{
	char alph = 97;

	for (alph = 97; alph <= 122; alph++)
		if (alph == 'q')
			alph++;
		else if (alph == 'e')
			alph++;
		else
			putchar(alph);

	putchar('\n');

	return (0);
}

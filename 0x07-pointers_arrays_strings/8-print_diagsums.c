#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int x, dia11 = 0, dia22 = 0;

	for (b = 0; b < size; b++)
	{
		dia1 += a[(size + 1) * x];
		dia2 += a[(size - 1) * (x + 1)];
	}

	printf("%d, %d\n", dia1, dia2);
}

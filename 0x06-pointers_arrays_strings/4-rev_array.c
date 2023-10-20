#include "main.h"
/**
 * reverse_array - concatenates two strings.
 * @n: argument 1
 * @a: argument 2
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, y = 0;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
		n--;
	}
}

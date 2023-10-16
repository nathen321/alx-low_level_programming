#include "main.h"
/**
 * swap_int - change the value with a pointer
 * @a: value to swap with b
 * @b: value to swap with a
 * returne: void
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

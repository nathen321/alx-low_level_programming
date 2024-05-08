#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Entry point
 * @array: ....
 * @size: ....
 * @value: ....
 *
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int x = 0;

	if (size == 0 || array == NULL)
	{
		return (-1);
	}
	for (x = 0; x < (int)size; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - a function that creates an array of integers
 * @max: max int
 * @min: min int
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int i = 0, size;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return(NULL);
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}

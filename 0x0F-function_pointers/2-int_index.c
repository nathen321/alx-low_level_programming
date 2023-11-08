#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - print an array
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to function to call
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}

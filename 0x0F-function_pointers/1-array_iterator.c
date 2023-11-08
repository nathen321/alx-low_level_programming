#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - print an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to function to call
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

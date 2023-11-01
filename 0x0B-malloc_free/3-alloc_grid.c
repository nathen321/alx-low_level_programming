#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * **alloc_grid- create an array
 * @width: width of the array
 * @height: height of the array
 * Return: array.
 */
int **alloc_grid(int width, int height)
{
	int **t;
	int x, y, z;

	if (width <= 0 || height <= 0)
		return (NULL);
	t = malloc(sizeof(int *) * height);
	for (y = 0; y < height; y++)
	{
		t[y] = malloc(sizeof(int) * width);
		if (t[y] == NULL)
			return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
		{
			t[x][z] = 0;
		}
	}

	if (t == NULL)
		return (NULL);
	return (t);
}

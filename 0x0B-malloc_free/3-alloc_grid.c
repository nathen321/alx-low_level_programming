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
	int x, y, z, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	t = malloc(sizeof(int *) * height);
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}
	for (y = 0; y < height; y++)
	{
		t[y] = malloc(sizeof(int) * width);
		if (t[y] == NULL)
		{
			for (j = y; j >= 0; j--)
			{
				free(t[j]);
			}

			free(t);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
		{
			t[x][z] = 0;
		}
	}
	return (t);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns pointer to a 2 dim array of integers
 * @width: input width
 * @height: input height
 * Return: pointer to 2 dim array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array == NULL)
		{
			free(array);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			array[i][n] = 0;
		}
	}
	return (array);
}

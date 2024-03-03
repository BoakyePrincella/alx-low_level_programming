# include <stdio.h>
# include <stdlib.h>
# include "main.h"

/**
 * alloc_grid - - returns a pointer to a two dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}

	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
	if (array == NULL)
		free(array);
	if (array[i] == NULL)
		free(array[i]);
}


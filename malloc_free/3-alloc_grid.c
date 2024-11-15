#include "main.h"
/**
 * alloc_grid - return a pointer to a 2dimensional arrays of int
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(array[b]);
			free(array);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			array[a][b] = 0;
	}
	return (array);
}

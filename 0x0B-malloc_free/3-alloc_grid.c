#include <stdlib.h>

/**
* alloc_grid - Allocates memory for a 2D array of integers
* @width: The width of the array (number of columns)
* @height: The height of the array (number of rows)
*
* This function allocates memory for a 2-dimensional array of integers with
* the specified dimensions (@width x @height), and initializes all elements
* to 0. If either @width or @height is 0 or negative, the function returns
* NULL.
*
* Return: If successful, a pointer to the allocated memory; otherwise NULL
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}


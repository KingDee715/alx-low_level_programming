#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - a pointer to a 2 dimensional array of integers
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/

int **alloc_grid(int width, int height)
{
	int * *2d;
	int a, b;

	if (width <= 0 || height <= 0)

		return (NULL);

	2d = malloc(sizeof(int *) * height);

	if (2d == NULL)

		return (NULL);

	for (a = 0; a < height; a++)

	{
		2d[a] = malloc(sizeof(int) * width);

		if (2d[a] == NULL)
		{
			for (; a >= 0; a--)
				free(2d[a]);

			free(2d);

			return (NULL);
		}
	}

	for (a = 0; a < height; a++)

	{
		for (b = 0; b < width; b++)
			2d[a][b] = 0;
	}
	return (mee);
}


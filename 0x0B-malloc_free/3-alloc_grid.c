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
	int **d2;
	int a, b;

	if (width <= 0 || height <= 0)

		return (NULL);

	d2 = malloc(sizeof(int *) * height);

	if (d2 == NULL)

		return (NULL);

	for (a = 0; a < height; a++)

	{
		d2[a] = malloc(sizeof(int) * width);

		if (d2[a] == NULL)
		{
			for (; a >= 0; a--)
				free(d2[a]);

			free(d2);

			return (NULL);
		}
	}

	for (a = 0; a < height; a++)

	{
		for (b = 0; b < width; b++)
			d2[a][b] = 0;
	}
	return (d2);
}


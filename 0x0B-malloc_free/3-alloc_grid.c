#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that return a pointer of 2 dimensional array
 * @width: width input value
 * @height: height input value
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		mee[a] = malloc(sizeof(int) * width);
			if (mee[a] == NULL)
			{
				for (; a >= 0; a--)
					free(mee[a]);
				free(mee);
				return (NULL);
			}
	}

	for (a = 0; a < height; a++)
	{

	for (b = 0; b < width; b++)
	mee[a][b] = 0;
	}
	return (mee);
}

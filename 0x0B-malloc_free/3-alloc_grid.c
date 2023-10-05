#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - retun pointer
 * @width:input width
 * @height:input height
 *
 * Return: pointer
 **/

int **alloc_grid(int width, int height)
{
	int **t, h, w;

	t = malloc(sizeof(*t) * height);
	if (width <= 0 || hieght <= 0 || t == 0)
	{
		return (NULL);
	}
	else
	{
		for (h = 0; h < height; h++)
		{
			t[h] = malloc(sizeof(**t) * width);
			if (t[h] == 0)
			{
				for (; h--; )
					free(t[h]);
				free(t);
				return (NULL);
			}
			for (w = 0; w < width; w++)
			{
				t[h][w] = 0;
			}
		}
	}
	return (t);
}


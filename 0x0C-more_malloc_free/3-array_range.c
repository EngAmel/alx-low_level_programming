#include "main.h"

/**
 * *array_range - function that creates an array of integers.
 * @min:input1
 * @max:input2
 * Return:return b
 **/

int *array_range(int min, int max)
{
	int *b;
	int i, j = 0;

	if (min > max)
		return (NULL);
	b = malloc(sizeof(*b) * ((max - min) + 1));
	if (b != NULL)
	{
		for (i = min; i <= max; i++)
		{
			b[j] = i;
			j++;
		}
		return (b);
	}
	else
		return (NULL);
}

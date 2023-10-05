#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creating array
 * @size:size of array
 * @c:element of array
 *
 * Return: the length
 **/

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);
	for (; size--; )
		x[size] = c;
	return (x);
}

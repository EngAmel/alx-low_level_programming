#include "main.h"

/**
 * *_calloc -function that allocates memory for an array, using malloc.
 * @nmemb:input1.
 * @size:input2.
 * Return:Returns b
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	b = malloc(nmemb * size);
	if (b != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			b[i] = 0;
		return (b);
	}
	else
		return (NULL);
}

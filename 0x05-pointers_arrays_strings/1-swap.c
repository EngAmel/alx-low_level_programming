#include <stdio.h>

/**
 * swap_int- swap pointers
 *@a:pointer ineed.
 *@b:pointer .
 *
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}

#include <stdio.h>

/**
 * reset_to_98- reset 98
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
	*b = j;
}

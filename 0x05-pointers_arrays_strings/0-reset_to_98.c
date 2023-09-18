#include <stdio.h>

/**
 * reset_to_98- reset 98
 *
 * Return: nothing.
 */

void reset_to_98(int *n)
{
	printf("Value of 'n': %p\n", n);
	printf("Address of 'n': %p\n", &n);
	*n = 98;
}

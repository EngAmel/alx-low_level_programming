#include "main.h"

/**
 * reverse_array - reverses
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int first, sec, rev;

	sec = n - 1;

	for (first = 0; first < n / 2; first++)
	{
		rev = a[first];
		a[first] = a[sec];
		a[sec--] = rev;
	}
}

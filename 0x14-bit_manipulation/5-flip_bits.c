#include "main.h"

/**
 * flip_bits - Converts
 * @n: input
 * @m: input
 *
 * Return: int
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, b = 0;

	x = n ^ m;
	while (x > 0)
	{
		b += (x & 1);
		x >>= 1;
	}

	return (b);
}

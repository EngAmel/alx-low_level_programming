#include "main.h"

/**
 * _sqrt_recursion - calcolate sqr
 * @n: number
 *
 * Return:square
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	_calcolate_sqr(0, n);
}

/**
 * _calcolate_sqr- returns square root of a number
 * @n: number to calculate the square root of
 * @sqr: squar of n
 * Return: the resulting square root
 **/

int _calcolate_sqr(int sqr, int n)
{
	if (sqr * sqr > n)
		return (-1);
	if (sqr * sqr == n)
		return (sqr);
	_calcolate_sqr(sqr + 1, n);
}

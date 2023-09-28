#include "main.h"

/**
 * _sqrt_recursion -calcolate sqrt in recursion
 *
 * @n:number will calcolate its sqrt
 * Return: sqrt.
 */

int _sqrt_recursion(int n)
{
	_calcolate_sqr(0, n);
}

/**
 * _calcolate_sqr- returns square root of a number
 * @n: number to calculate the square root of
 * @sqr:square of num
 * Return: the resulting square root
 **/

int _calcolate_sqr(int sqr, int n)
{
	if (n < 0)
		return (-1);
	if (sqr * sqr > n)
		return (-1);
	if (sqr * sqr == n)
		return (sqr);
	_calcolate_sqr(sqr + 1, n);
}

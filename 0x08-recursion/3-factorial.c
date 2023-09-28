#include "main.h"

/**
 * factorial- return factorial of number
 *
 * @n:number will calcolate its factorial
 * Return: nothing.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

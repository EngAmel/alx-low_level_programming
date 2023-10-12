#include "variadic_functions.h"

/**
 * sum_them_all - sum mums
 * @n:number of inputs
 *
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum = sum + x;
	}
	return (sum);
}

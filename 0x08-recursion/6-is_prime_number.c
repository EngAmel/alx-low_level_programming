#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 **/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calcolate_prime(n, n - 1));
}

/**
 * calcolate_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @prm: iterator
 *
 * Return: 1 if n is prime, 0 if not
 **/

int calcolate_prime(int n, int prm)
{
	if (prm == 1)
		return (1);
	if (n % prm == 0 && prm > 0)
		return (0);
	return (calcolate_prime(n, prm - 1));
}

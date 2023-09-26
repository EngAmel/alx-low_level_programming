#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print additions of the two diagonals.
 * @a:matrix
 * @size: size of matrix
 *
 * Return: chessboard.
 */

void print_diagsums(int *a, int size)
{
	int i, j, diag1 = 0, diag2 = 0, stp1, stp2;

	for (i = 0; i <= (size - 1); i++)
	{
		stp1 =  (size + 1) * i;
		diag1 = diag1 + *(a + stp1);
	}

	for (j = 1; j <= size; j++)
	{
		stp2 = (size - 1) * j;
		diag2 = diag2 + *(a + stp2);
	}
	printf("%d, %d\n", diag1, diag2);
}

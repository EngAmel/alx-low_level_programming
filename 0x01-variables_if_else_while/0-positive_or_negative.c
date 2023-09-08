#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description:C programm use printf function
 *
 * Return:Always 0 (Success)
 *
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d	is	positive\n", n);
	if else(n == 0)
		printf("%d      is      0\n", n);
	else
		printf("%d      is      negtive\n", n);
	/* your code goes there */
	return (0);
}

#include "main.h"

/**
 * *malloc_checked - Entry point
 *
 * Description:C programm use malloc
 * @b:input
 *
 * Return:Always m
 **/

void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == 0)
	{
		exit(98);
	}
	return (m);
}

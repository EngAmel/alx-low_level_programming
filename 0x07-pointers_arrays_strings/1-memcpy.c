#include "main.h"

/**
 * _memcpy - fills memory.
 * @dest:string
 * @src:string
 * @n:lenght
 * Return:string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

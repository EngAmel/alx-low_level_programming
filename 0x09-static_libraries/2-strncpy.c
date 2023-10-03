#include "main.h"

/**
 * _strncpy- copy
 * @dest:first string
 * @src:second string
 * @n:number of limoit
 * Return: strng
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0' && count < n ; count++)
	{
		dest[count] = src[count];
		;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

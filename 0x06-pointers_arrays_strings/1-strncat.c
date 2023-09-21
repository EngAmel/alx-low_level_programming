#include "main.h"

/**
 * _strncat- connect
 * @dest:first string
 * @src:second string
 *
 * Return: strng.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1, count2;

	for (count1 = 0; dest[count1] != '\0'; count1++)
		;
	for (count2 = 0; src[count2] != '\0' && count2 < n ; count2++)
	{
		dest[count1] = src[count2];
		count1++;
	}
	dest[count1] = '\0';
	return (dest);
}

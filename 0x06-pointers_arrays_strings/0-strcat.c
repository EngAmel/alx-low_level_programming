#include "main.h"

/**
 * _strcat- connect
 * @dest:first string
 * @src:second string
 *
 * Return: strng.
 */

char *_strcat(char *dest, char *src)
{
	int count1, count2;

	for (count1 = 0; dest[count1]; count1++)
	for (count2 = 0; src[count2]; count++)
		dest[count1++] = src[count2];
	return (dest);
}

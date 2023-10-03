#include "main.h"

/**
 * _strstr - prints the consecutive
 * @haystack:string
 * @needle:string
 *
 * Return:string.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}

/**
 * coincidence - defintion
 * @a:string
 * @b: string
 *
 * Return: 1 if there is coincidence, otherwise 0.
 */

int coincidence(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 *_strcmp- reset
 *@s1:string1
 *@s2:string2
 *Return: nothing.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

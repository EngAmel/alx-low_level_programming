#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - length of a str
 * @s:pointer
 *
 * Return: the length
 **/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * *str_concat - length of a str
 * @s1:pointer1
 * @s2:pointrr2
 *
 * Return:mal
 **/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *mal;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	mal = malloc((size1 + size2) * sizeof(char) + 1);
	if (mal == 0)
	{
		return (0);
	}
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			mal[i] = s1[i];
		else
			mal[i] = s2[i - size1];
	}
	mal[i] = '\0';
	return (mal);
}

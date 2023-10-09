#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		cat = malloc(sizeof(char) * (l1 + n + 1));
	else
		cat = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!cat)
		return (NULL);
	while (i < l1)
	{
		cat[i] = s1[i];
		i++;
		while (s1[i] != '\0')
		{
			cat[i] = s1[i];
			i++;
		}
		while (j < n)
		{
			cat[i] = s2[j];
			i++;
			j++;
		}
	}
		cat[i] = '\0';
		return (cat);
}

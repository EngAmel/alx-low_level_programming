#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1:input1.
 * @s2:input2.
 * @n:input3.
 * Return:Returns Concat.
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *cat;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		l++;
	cat = malloc(sizeof(char) * (l + 1));
	if (cat == NULL)
		return (NULL);
	l = 0;
	for (i = 0; s1[i]; i++)
		cat[l++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		cat[l++] = s2[i];
	cat[l] = '\0';
	return (cat);
}

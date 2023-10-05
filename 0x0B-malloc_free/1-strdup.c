#include "main.h"

/**
 * *_strdup - retun pointer
 * @str:input string
 *
 * Return: pointer
 **/
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *mal;

	if (str == NULL)
		return (NULL);
	for (; str[size != '\0']; size++)
		;
	mal = malloc(size * sizeof(*str) + 1);
	if (mal == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			mal[i] = str[i];
	}
	return (mal);
}

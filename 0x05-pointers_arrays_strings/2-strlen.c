#include "main.h"

/**
 * _strlen - length of a str
 * @s:pointer
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j = j + 1;
	return (j);
}

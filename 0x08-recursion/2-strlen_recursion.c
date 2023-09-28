#include "main.h"
#include <string.h>

/**
 * _strlen_recursion- calcolate strlen_recursion
 *
 * @s:char will be calcolated
 * Return: nothing.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (strlen(s));
}

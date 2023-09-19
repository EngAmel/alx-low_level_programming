#include "main.h"

/**
 *_print_rev - print rev
 * @s: pointer
 */

void print_rev(char *s)
{
	int i, j, x = 0, y;

	for (i = 0; s[i] != '\0'; i++)
	{
		x = x + 1;
	}
	for (j = x; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}

#include "main.h"

/**
 *puts2 - string to stdout
 * @str: pointer
 */

void puts2(char *str)
{
	int i;

	_putchar(str[0]);
	for (i = 1; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

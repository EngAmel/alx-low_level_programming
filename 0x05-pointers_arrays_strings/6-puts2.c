#include "main.h"

/**
 *puts2 - string to stdout
 * @str: pointer
 */

void puts2(char *str)
{
	int i;

	_putchar(str[0]);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i + 1]);
	}
	_putchar('\n');
}

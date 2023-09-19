#include "main.h"

/**
 *puts2 - string to stdout
 * @str: pointer
 */

void puts2(char *str)
{
	int i, length = 0;

	for (i = 1; str[i] != '\0'; i++)
		length = length;
	_putchar(str[0]);
	for (i = 1; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

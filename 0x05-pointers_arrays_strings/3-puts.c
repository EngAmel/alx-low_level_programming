#include "main.h"

/**
 *_puts - string to stdout
 * @str: pointer
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

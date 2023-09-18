#include "main.h"

/**
 *_puts - string to stdout
 * @str: pointer
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		puts(str[i]);
	}
	puts('\n');
}

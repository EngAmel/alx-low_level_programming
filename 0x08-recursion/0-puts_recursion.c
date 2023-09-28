#iclude "main.h"

/**
 * _puts_recursion- print in recursion
 *
 *@s:char will be printed
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}

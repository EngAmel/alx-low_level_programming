#include "main.h"

/**
 * string_toupper - changes lowercase
 * @s: string
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int ltr;

	for (ltr = 0; s[ltr] != '\0'; ltr++)
	{
		if (s[ltr] >= 'a' && s[ltr] <= 'z')
			s[ltr] = s[ltr] - 32;
	}

	return (s);
}

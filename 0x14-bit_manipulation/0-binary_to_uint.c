#include "main.h"

/**
 * binary_to_uint - convertting
 * @b: pointer
 *
 * Return: unsigned int
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 1;
	int ln;

	if (b == NULL)
		return (0);

	for (ln = 0; b[ln];)
		ln++;

	for (ln -= 1; ln >= 0; ln--)
	{
		if (b[ln] != '0' && b[ln] != '1')
			return (0);

		n += (b[ln] - '0') * i;
		i *= 2;
	}

	return (n);
}

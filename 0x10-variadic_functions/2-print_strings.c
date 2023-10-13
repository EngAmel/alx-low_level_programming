#include "variadic_functions.h"

/**
 * print_strings - print_numbers
 * @n:number of inputs
 * @separator:string
 *
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char *);

		if (!x)
			printf("(nil)");
		printf("%s", x);
		if (separator)
		{
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}

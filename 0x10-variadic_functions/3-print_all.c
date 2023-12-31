#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - print_numbers
 * @format:type of inputs
 *
 **/
void print_all(const char *format, ...)
{
	va_list args;
	int i = 0;
	char *x;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (i > 0)
			printf(", ");
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			x = va_arg(args, char *);

			if (x == NULL)
				x = ("(nil)");
			printf("%s", va_arg(args, char *));
			break;
		default:
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
		       printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

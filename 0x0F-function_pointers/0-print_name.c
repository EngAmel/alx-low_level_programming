#include "function_pointers.h"

/**
 * print_name - printting name
 * @name:input
 * @f: pointer to the printing function
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

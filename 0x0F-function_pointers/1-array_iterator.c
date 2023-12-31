#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array:input1
 * @action:  a pointer to the function you need to use
 * @size: is the size of the array
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *x = array + size - 1;

	if (array && size && action)
		for (; array <= x; )
			action(*array++);
}

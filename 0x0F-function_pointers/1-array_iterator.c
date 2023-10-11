#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterato - function given as a parameter on each element of an array.
 * @array:input1
 * @action:  a pointer to the function you need to use
 * @size: is the size of the array
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	for (int i = 0; i <= size; i++)
		action(array[i]);
}

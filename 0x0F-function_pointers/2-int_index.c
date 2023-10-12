#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array:input1
 * @cmp: a pointer to the function you need to use
 * @size: is the size of the array
 * Return:the index of the first element.
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}

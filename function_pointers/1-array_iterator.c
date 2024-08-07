#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Write 'function that executes a function given'
 * as a parameter on each element of an array
 * @size: Size of array
 * @action: pointer to the function
 * @array: parameter on each element or an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (; i < size; i++)
		(*action)(array[i]);
}

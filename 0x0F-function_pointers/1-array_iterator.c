#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* on each element of an array.
*
* @array: array pointer.
* @size: size of the array.
* @action: function pointer.
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size > 0 && array && action)
	{
		for (i = 0; i < (int) size; i++)
		{
			action(array[i]);
		}
	}
}

#include "function_pointers.h"

/**
* int_index - searches for an integer.
*
* @array: array of elements.
* @size: size of the array.
* @cmp: compairing function.
*
* Return: index of the element if found. -1 otherwise.
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}

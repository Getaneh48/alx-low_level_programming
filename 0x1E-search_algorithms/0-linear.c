#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search -  a function that searches for a value
 * in an array of integers using the Linear search algorithm
 *
 * @array: array of integers
 * @size: the size of the array
 * @value: value to be searched
 * Return: the index of the value
*/

int linear_search(int *array, size_t size, int value)
{

	size_t i;
	int foundIndex = -1;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			foundIndex = i;
			break;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}

	return (foundIndex);
}

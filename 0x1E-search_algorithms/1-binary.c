#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search-  a function that searches for a value
 * in a sorted array of integers using the binary search algorithm
 *
 * @array: array of integers
 * @size: the size of the array
 * @value: value to be searched
 * Return: the index of the value
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (right - left) / 2;
		mid = left + mid;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}

	}

	return (-1);
}

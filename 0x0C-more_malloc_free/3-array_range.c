#include "main.h"

/**
* array_range -  creates an array of integers.
*
* @min: min value
* @max: max value
*
* Return: the address of the newly created array.
*
*/

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(p));
	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		*(p + (i - min)) = i;

	return (p);
}

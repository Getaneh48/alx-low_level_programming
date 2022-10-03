#include "main.h"

/**
* alloc_grid - function that returns a pointer
* to a 2 dimensional array of integers.
*
* @width: integer value for column size.
* @height: integer value for row size.
*
* Return: returns a pointer to a 2 dimensional array.
*
*/

int **alloc_grid(int width, int height)
{
	int **ptr, i;

	if (width <= 0 || height <= 0)
		return (NULL);


	ptr = (int **) malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
	}

	return (ptr);
}

#include "main.h"

/**
*  malloc_checked - allocates memory using malloca
*
*  @b: size of memory to allocate.
*
*  Return: address of the allocated memory.
*
*/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = (int *) malloc(b * sizeof(int));
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}

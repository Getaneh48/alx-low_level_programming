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
	unsigned int *p;

	p = malloc(b * sizeof *p);
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}

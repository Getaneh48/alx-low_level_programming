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

	p = (unsigned int *) malloc(b * sizeof(unsigned int));

	if (p == NULL)
	{
		printf("Error encounter...\n");
		exit(98);
	}

	return (p);
}

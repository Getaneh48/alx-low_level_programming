#include "main.h"
#include <string.h>

/**
* _calloc -  allocates memory for an array, using malloc
*
* @nmemb: number of elements of an array
* @size: size of each element in byte.
*
* Return: address location of the created memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	memset(p, 0, size);

	return (p);
}

#include "main.h"
#include <stdlib.h>

/**
* create_array -  creates an array of chars, and initializes
* it with a specific char.
*
* @size: size of memory in byte to create.
* @c: character to initialize the memory.
*
* Return: pointer to the create memeory.
*
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;

	return (ptr);
}

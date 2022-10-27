#include "main.h"

/**
* get_bit - returns the value of a bit at a given index.
*
* @n: number
* @index: index of a bit.
*
* Return: returns the value of a bit at a given index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	x = n >> index;
	if (x > 0)
		return ((x & 1));

	return (-1);
}

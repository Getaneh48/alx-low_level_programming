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
	unsigned long int x;

	x = n >> index;
	return ((x & 1));
}

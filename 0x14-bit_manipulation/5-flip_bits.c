#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip
* to get from one number to another.
*
* @n: number1
* @m: number2
*
* Return: number of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	int count = 0;

	while (xor > 0)
	{
		count++;
		xor &= (xor - 1);
	}

	return (count);
}

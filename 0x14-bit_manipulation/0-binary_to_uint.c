#include "main.h"
#include <stdio.h>

/**
* binary_to_uint - converts a binary number to an unsigned int.
*
* @b: binary string of characters.
*
* Return: decimal value of the binary.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int error = 0, number = 0, len = 0;
	const char *n;

	if (b == NULL)
		return (0);

	n = b;
	len = _strlen(n) - 1;

	for (; *n != '\0'; n++)
	{
		if ((int)*n == 48 || (int)*n == 49)
		{
			number += ((unsigned int) *n - 48) * _pow(2, len);
			len--;
		}
		else
		{
			error = 1;
			break;
		}
	}

	if (error)
		return (0);

	return (number);
}

/**
* _strlen - calculates the string length.
*
* @n: string
*
* Return: the length of a string.
*/
unsigned int _strlen(const char *n)
{
	unsigned int i = 0;

	for (; *n != '\0'; n++)
		i++;

	return (i);
}

/**
* _pow - calculates a power of a number.
*
* @base: base value.
* @exp: power value.
*
* Return: integer value of base to the power of exp.
*/
int _pow(int base, int exp)
{
	int result = 1, i = 0;

	while (i < exp)
	{
		result *= base;
		i++;
	}

	return (result);
}

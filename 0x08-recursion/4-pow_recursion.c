#include "main.h"

/**
* _pow_recursion - a function that returns the value
* of x raised to the power of y.
*
* @x: base.
* @y: exponent
*
* Return: result
*
*/

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	if (x > 0)
		result = -x * _pow_recursion(x, y - 1);
	else
		result = x * _pow_recursion(x, y - 1);

	return (result);
}

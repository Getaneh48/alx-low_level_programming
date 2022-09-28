#include "main.h"

/**
* _sqrt_recursion - calculates the natural square root of a number.
*
* @n: the number whose square root is to be found.
*
* Return: the squar root of a number.
*
*/

int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
	{
		x = -1;
	}
	else if (n == 0)
	{
		x = 0;
	}
	else if (n == 1)
	{
		x = 1;
	}
	else
	{
		x = find_sqrt(n, 2);
	}

	return (x);
}

/**
* find_sqrt - finds the square root of a number.
*
* @num: the number to be calculated.
* @f: factor of the number
*
* Return: the square root of the number.
*
*/

int find_sqrt(int num, int f)
{
	int x;

	if (num % f == 0 && f * f == num)
		x = f;
	else if (f > num / 2)
		x = -1;
	else
		x = find_sqrt(num, f + 1);

	return (x);
}

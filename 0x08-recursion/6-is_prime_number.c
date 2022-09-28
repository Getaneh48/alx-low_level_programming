#include "main.h"

/**
* is_prime_number -  a function that checks if a number is prime or not.
*
* @n: integer number to check
*
* Return: 1 if it is prime or 0 if it is not.
*
*/

int is_prime_number(int n)
{
	int result;

	result = 0;

	if (n <= 1)
		result = 0;
	else
		result = check_prime(n, 2);

	return (result);
}

/**
* check_prime - check a number if it is prime or not
*
* @num: number to be checked.
* @divisor: divisors of a number.
*
* Return: 1 if it is prime or 0 if it is not.
*
*/

int check_prime(int num, int divisor)
{
	int p = 1;

	if (divisor < num && num % divisor == 0)
		return (0);

	if (divisor >= num)
		return (p);

	p = check_prime(num, divisor + 1);

	return (p);
}

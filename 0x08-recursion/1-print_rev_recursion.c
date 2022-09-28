#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse.
*
* @s: string to be printed in reverse
*
*/

void _print_rev_recursion(char *s)
{
	int str_len = 0;

	str_len = _strlen(s, 0) - 1;
	printr(s + str_len, str_len);

}

/**
* printr - print a string in reverse order.
*
* @c: the string to be printed in reverse.
* @len: the last index of the string.
*
*/

void printr(char *c, int len)
{
	if (len < 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(*c);
	printr(--c, --len);
}

/**
* _strlen - find the length of the string
*
* @c: the string whose length to be checked.
* @i: index
*
* Return: the string length as integer.
*
*/

int _strlen(char *c, int i)
{
	int d;

	d = 0;

	if (*c == '\0')
		return (i);

	d = i + 1;
	i = _strlen(++c, d);


	return (i);

}

#include "main.h"

/**
* is_palindrome - check if a string is a palindrome.
*
* @s: a pointer to a string to be checked.
*
* Return: 1 if it is palindrome 0 otherwise.
*
*/

int is_palindrome(char *s)
{
	int len, is_p;
	char *rs;

	len = _strlen(s, 0);
	rs = s + (len - 1);
	is_p = check_polindrome(s, rs, 0, len - 1);

	return (is_p);
}

/**
* check_polindrome - check if a string is a palendrome.
*
* @s: a pointer to the start of a string.
* @es: a pointer to the end of a string.
* @sindex: the first index of the string.
* @eindex: the last index of the string.
*
* Return: 1 if the string is polindrome 0 otherwise.
*
*/

int check_polindrome(char *s, char *es, int sindex, int eindex)
{
	int is_p = 1;

	if (*s != *es)
		is_p = 0;
	else if (sindex > eindex)
		is_p = 1;
	else
		is_p = check_polindrome(++s, --es, ++sindex, --eindex);

	return (is_p);

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


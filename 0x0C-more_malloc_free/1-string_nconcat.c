#include "main.h"
#include <string.h>
/**
* string_nconcat - concatenates two strings
*
* @s1: source string.
* @s2: destination string.
* @n: number of bytes to concatenate.
*
* Return: address of the concatenated string.
*
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = (n >= strlen(s2)) ? strlen(s2) : n;

	ptr = malloc((len + strlen(s1) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	j = 0;
	for (; *s1 != '\0'; s1++)
	{
		*(ptr + j) = *s1;
		j++;
	}

	for (i = 0; i < len; i++)
	{
		*(ptr + j) = *(s2 + i);
		j++;
	}

	*(ptr + j) = '\0';

	return (ptr);
}

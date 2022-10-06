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
	int len;
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

	strcpy(ptr, s1);
	strncat(ptr, s2, len);

	return (ptr);
}

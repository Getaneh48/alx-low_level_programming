#include "main.h"
#include <string.h>

/**
* str_concat - concatenates two strings.
*
* @s1: string one
* @s2: string two
*
* Return: concatenates of two string
*
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, len;

	i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	len = strlen(s1) + strlen(s2);

	ptr = (char *) malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		if (*s1 != '\0')
		{
			*(ptr + i) = *s1;
			s1++;
		}
		else
		{
			*(ptr + i) = *s2;
			s2++;
		}

		i++;
	}

	return (ptr);
}

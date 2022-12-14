#include "main.h"
#include <string.h>

/**
* _strdup - function that returns a pointer to a newly
* allocated space in memory, which contains a copy of
* the string given as a parameter.
*
* @str: string
*
* Return: a pointer to a newly created string.
*
*/

char *_strdup(char *str)
{
	char *ptr = NULL;
	int i;

	i = 0;

	if (str == NULL)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * strlen(str) + 1);

	if (ptr == NULL)
		return (NULL);

	while (*str != '\0')
	{
		*(ptr + i) = *str;
		i++;
		str++;
	}

	return (ptr);
}

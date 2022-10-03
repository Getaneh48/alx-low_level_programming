#include "main.h"
#include <string.h>

/**
* argstostr - concatenates all the arguments of a program.
*
* @ac: number of arguments.
* @av: address of the arguments array.
*
* Return: cancatenation of the arguments.
*
*/

char *argstostr(int ac, char **av)
{
	char *s;
	int i, total_len, j;

	total_len = 0;
	j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]);
	}

	s = (char *) malloc(sizeof(char) * total_len + ac + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (*av[i] != '\0')
		{
			*(s + j) = *av[i];
			av[i]++;
			j++;
		}

		*(s + j) = '\n';

	}

	*(s + j) = '\0';

	return (s);
}

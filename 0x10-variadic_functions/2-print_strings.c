#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - prints strings, followed by a new line.
*
* @separator: number separator charactor.
* @n: number of arguments.
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char*);
			if (i < n - 1)
			{
				if (str == NULL)
				{
					printf("%s", "(nil)");
				}
				else
					printf("%s%s", str, separator);
			}
			else
				printf("%s", str);
		}

		printf("\n");
	}

}

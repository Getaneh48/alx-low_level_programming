#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything.
*
* @format: format specifier.
*
*/

void print_all(const char * const format, ...)
{
	va_list args;
	char ch, *s;
	int d, c, i = 0, match = 1;
	double f;

	va_start(args, format);
	while (format != NULL && (ch = format[i]))
	{
		switch (ch)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				d = va_arg(args, int);
				printf("%d", d);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("%s", "(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				match = 0;
		} i++;
		if (format[i] != '\0' && match)
			printf(", ");
		match = 1;
	}
	printf("\n");
	va_end(args);
}

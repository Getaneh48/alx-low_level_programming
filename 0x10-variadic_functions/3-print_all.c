#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * format, ...)
{
    va_list args;
    char ch;
    int d;
    int c;
    double f;
    char *s;
    int match = 1;

    va_start(args, format);
    while((ch = *format))
    {
        switch(ch)
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
                if (s != NULL)
                    printf("%s", s);
                else
                    printf("%s", "(nil)");
                break;
            default:
                match = 0;
                break;
        }
        format++;
        if (*format != '\0' && match)
            printf(", ");

        match = 1;
    }

    printf("\n");
}

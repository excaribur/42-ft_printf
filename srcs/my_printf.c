// C program for the above approach

#include "libftprintf.h"
#include "../libft/libft.h"

#include <stdio.h>
#include <stdarg.h>

void my_printf(char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format == 'c') {
                char c = va_arg(args, int);
                putchar(c);
            } else if (*format == 'd') {
                int d = va_arg(args, int);
                printf("%d", d);
            } else if (*format == 's') {
                char *s = va_arg(args, char *);
                printf("%s", s);
            } else {
                putchar(*format);
            }
        } else {
            putchar(*format);
        }
        format++;
    }

    va_end(args);
}

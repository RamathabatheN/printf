#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints everything
 * @format:string input
 * @...:extra arguments
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
va_list more;
char c;
const char *str;
void *k;
unsigned int e;
int len = 0, d;
va_start(more, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case '%':
putchar('%');
(len)++;
break;
case 's':
{
str = va_arg(more, const char *);
(len) += sign_string(str);
break;
}
case 'c':
{
c = va_arg(more, int);
putchar(c);
(len)++;
break;
}
case 'd':
case 'i':
{
d = va_arg(more, int);
(len) += sign_decimal(d);
break;
}
case 'u':
{
e = va_arg(more, unsigned int);
(len) += sign_unsigned(e);
break;
}
case 'b':
{
e = va_arg(more, unsigned int);
(len) += num_binary(e);
break;
}
case 'o':
{
e = va_arg(more, unsigned int);
(len) += sign_octal(e);
break;
}
case 'x':
{
e = va_arg(more, unsigned int);
(len) += sign_hexa(e);
break;
}
case 'X':
{
e = va_arg(more, unsigned int);
(len) += sign_HEXA(e);
break;
}
case 'p':
{
putchar('0');
(len)++;
putchar('x');
(len)++;
k = va_arg(more, void *);
addresses(k);
(len)++;
break;
}
case 'R':
{
str = va_arg(more, const char *);
(len) += print_rot13string(str);
break;
}
case 'S':
{
str = va_arg(more, const char *);
len += non_printable(str);
break;
}
default:
putchar('%');
(len)++;
putchar(*format);
(len)++;
}
}
else
{
putchar(*format);
(len)++;
}
format++;
}
va_end(more);
return (len);
}

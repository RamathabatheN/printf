#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
#include "main.h"

/**
 * prints - prints anything
 * @format: string input
 * @more: va_list
 *
 * Return: void
 */
int prints(const char *format, va_list more)
{
int i = 0, b, len = 0;
char g;
unsigned int e = 0;
char *d;
void *k;
ssize_t __attribute__ ((unused)) v;
char __attribute__ ((unused)) buf[BUFF_SIZE];
int state = 0;
while (format[i])
{
if (state == 0)
{
if (format[i] == '%')
{
state = 1;
}
else
{
_putchar(format[i]);
}
}
else if (state == 1)
{
switch (format[i])
{
case 'c':
g = va_arg(more, int);
sign_char(g);
len++;
break;
case 's':
d = va_arg(more, char *);
sign_string(d);
len += _strlens(d);
break;
case 'i':
case 'd':
b = va_arg(more, int);
sign_decimal(b);
len ++;
break;
case 'u':
e = va_arg(more, unsigned int);
sign_unsigned(e);
len ++;
break;
case 'b':
e = va_arg(more, unsigned int);
num_binary(e);
len ++;
break;
case 'o':
e = va_arg(more, unsigned int);
sign_octal(e);
len ++;
break;
case 'x':
e = va_arg(more, unsigned int);
sign_hexa(e);
len ++;
break;
case 'X':
e = va_arg(more, unsigned int);
sign_HEXA(e);
len += _strlens(buf);
break;
case 'p':
{
_putchar('0');
_putchar('x');
k = va_arg(more, void *);
addresses(k);
len += _strlens(buf);
break;
}
case '%':
_putchar('%');
len++;
break;
case 'S':
d = va_arg(more, char *);
non_printable(d);
len += _strlens(d);
break;
/*case 'r':
d = va_arg(more, char *);
rev_string(d);
v = write(1, &d, _strlen(d));
len += _strlens(d);
break;*/
case 'R':
d = va_arg(more, char *);
print_rot13string(d);
v = write(1, &d, _strlen(d));
len += _strlens(d);
break;
default:
_putchar('%');
_putchar(*format);
}
state = 0;
}
format++;
len++;
}
return (len);
}

/**
 * _printf - prints everything
 * @format:string input
 * @...:extra arguments
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
va_list more;
int len;
va_start(more, format);
len = prints(format, more);
va_end(more);
return (len);
}

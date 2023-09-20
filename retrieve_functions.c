#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
#include "main.h"
#define BUFF_SIZE (1024)


/**
 * prints - prints anything
 * @format: string input
 * @more: va_list
 *
 * Return: void
 */
void prints(const char *format, va_list more)
{
int i = 0, b;
/*int __attribute__ ((unused)) buff_index;*/
char g; /*h = '%';*/
unsigned int e = 0;
char *d;
void *k;
ssize_t __attribute__ ((unused)) v;
/*char __attribute__ ((unused)) buf[BUFF_SIZE];*/
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
break;
case 's':
d = va_arg(more, char *);
sign_string(d);
break;
case 'i':
b = va_arg(more, int);
sign_decimal(b);
break;
case 'd':
b = va_arg(more, int);
sign_decimal(b);
break;
case 'u':
e = va_arg(more, unsigned int);
sign_unsigned(e);
break;
case 'b':
e = va_arg(more, unsigned int);
num_binary(e);
break;
case 'o':
e = va_arg(more, unsigned int);
sign_octal(e); 
break;
case 'x':
e = va_arg(more, unsigned int);
sign_hexa(e); 
break;
case 'X':
e = va_arg(more, unsigned int);
sign_HEXA(e);  
break;
case 'p':
_putchar('0');
_putchar('x');
k = va_arg(more, void *);
sign_hexa(k);
break;
case '%':
_putchar('%');
break;
case 'r':
d = va_arg(more, char *);
rev_string(d);
v = write(1, &d, _strlen(d));
break;
default:
format++;
}
state = 0;
}
format++;
}
}
int _printf(const char *format, ...)
{
va_list more;
va_start(more, format);
prints(format, more);
va_end(more);
return (0);
}

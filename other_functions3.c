#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "main.h"

/**
 * sign_per - prints % sign
 * Return: character
 */
char sign_per(void)
{
char a;
a = '%';
return (write(1, &a, 1));
}

/**
 * addresses - prints the address of a pointer
 * @i:pointer
 * Return: void
 */
void addresses(void *i)
{
ssize_t __attribute__ ((unused)) a;
char *c;
c = (char *)&i;
while (*c != '\0')
{
a = write(1, c, strlen(c));
c++; 
}
}

/**
 * _strlens - returns string length
 * @st:string input
 * Return: string length
 */
int _strlens(const char *st)
{
int len = 0;
for (len = 0; st[len] != '\0'; len++)
{
}
return (len);
}

/**
 * non_printable - diplays non-printables
 * Return: Always 0
 */
int non_printable(const char *buffer)
{
int s;
char o;
for (s = 0; buffer[s] != '\0'; s++) 
{
o = buffer[s];
if (o >= 32 && o <= 126) 
{
putchar(o);
} 
else
{
putchar('\\');
putchar('x');
sign_HEXA(s);
}
}
return 0;
}


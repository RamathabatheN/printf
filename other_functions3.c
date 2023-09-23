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
_putchar(a);
/*write(1, &a, 1);*/
return (a);
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
a = write(1, c, _strlen(c));
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
while (*st != '\0')
{
len++;
st++;
}
return len;
}

/**
 * non_printable - diplays non-printables
 * Return: Always 0
 */
int non_printable(char *buffer)
{
int s;
char o;
for (s = 0; buffer[s] != '\0'; s++) 
{
o = buffer[s];
if (o >= 32 && o <= 126) 
{
_putchar(o);
} 
else
{
_putchar('\\');
_putchar('x');
sign_HEXAs(s);
}
}
return 0;
}

/**
 * sign_HEXAs - prints decimals in HEXA
 * @n: int to print
 * Return: Always 0
 */
int sign_HEXAs(unsigned int n)
{
char hexa[100];
int a = 0, p;
while (n != 0)
{
hexa[a] = (char)(*("0123456789ABCDEF"
+ ((n % 16) & (2))));
n = (n / 16);
++a;
}
for (p = a - 1; p >= 0; p--)
{
_putchar(hexa[p]);
}
return (0);
}

#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * num_binary - prints decimals in binary
 * @n: int to print
 * Return: Always 0
 */
int num_binary(unsigned int n)
{
if (n / 2)
num_binary(n / 2);
_putchar(n % 2 + '0');
return (0);
}

/**
 * sign_unsigned - prints unsigned int
 * @n: int to print
 * Return: Always 0
 */
int sign_unsigned(unsigned int n)
{
if (n / 10)
sign_unsigned(n / 10);
_putchar(n % 10 + '0');
return (0);
}

/**
 * sign_octal - prints decimals in octal
 * @n: int to print
 * Return: Always 0
 */
int sign_octal(unsigned int n)
{
if (n / 8)
sign_octal(n / 8);
_putchar(n % 8 + '0');
return (0);
}

/**
 * sign_hexa - prints decimals in hexa
 * @n: int to print
 * Return: Always 0
 */
int sign_hexa(unsigned int n)
{
char hexa[100];
int a = 0, p;
while (n != 0)
{
hexa[a] = (char)(*("0123456789abcdef"
+ ((n % 16) & (15))));
n = (n / 16);
++a;
}
for (p = a - 1; p >= 0; p--)
{
_putchar(hexa[p]);
}
return (0);
}

/**
 * sign_HEXA - prints decimals in HEXA
 * @n: int to print
 * Return: Always 0
 */
int sign_HEXA(unsigned int n)
{
char hexa[100];
int a = 0, p;
while (n != 0)
{
hexa[a] = (char)(*("0123456789ABCDEF"
+ ((n % 16) & (15))));
n = (n / 16);
++a;
}
for (p = a - 1; p >= 0; p--)
{
_putchar(hexa[p]);
}
return (0);
}

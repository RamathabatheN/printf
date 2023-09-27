#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * num_binary - prints decimals in binary
 * @a: int to print
 * Return: counter
 */
int num_binary(unsigned int a)
{
int counter, index = 0, digit, i;
int digits[65];
if (a)
{
counter = counting_digits(a, 2);
/*digits[counter];*/
while (a != 0)
{
digit = a % 2;
digits[index++] = digit;
a /= 2;
}
for (i = index - 1; i >= 0; i--)
{
putchar('0' + digits[i]);
}
return (counter);
}
else
{
print("(null)");
return -1;
}
}

/**
 * sign_unsigned - prints unsigned integers
 * @a: int to print
 * Return: counter
 */
int sign_unsigned(unsigned int a)
{
int counter, index = 0, digit, i;
int digits[65];
if (a)
{
counter = counting_digits(a, 10);
/*digits[counter];*/
while (a != 0)
{
digit = a % 10;
digits[index++] = digit;
a /= 10;
}
for (i = index - 1; i >= 0; i--)
{
putchar('0' + digits[i]);
}
return (counter);
}
else
{
print("(null)");
return -1;
}
}

/**
 * sign_octal - prints decimals in octal
 * @a: int to print
 * Return: counter
 */
int sign_octal(unsigned int a)
{
int counter, index = 0, digit, i;
int digits[65];
if (a)
{
counter = counting_digits(a, 8);
/*digits[counter];*/
while (a != 0)
{
digit = a % 8;
digits[index++] = digit;
a /= 8;
}
for (i = index - 1; i >= 0; i--)
{
putchar('0' + digits[i]);
}
return (counter);
}
else
{
print("(null)");
return -1;
}
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
putchar(hexa[p]);
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
putchar(hexa[p]);
}
return (0);
}

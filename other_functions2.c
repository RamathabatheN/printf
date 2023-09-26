#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
return (-n);
}

/**
 * _itoa - convert int into string
 * @given: the int to convert
 * @buf: input string
 * @base: base of the number
 * Return: string converted int
 */
char *_itoa(int given, char *buf, int base)
{
int n, m, a = 0;
n = _abs(given);
if (base < 2 || base > 32)
{
return buf;
}
while (n)
{
m = n % base;
if (m >= 10) {
buf[a++] = 65 + (m - 10);
}
else
{
buf[a++] = 48 + m;
}
n = n / base;
}
if (a == 0) {
buf[a++] = '0';
}
if (given < 0 && base == 10)
{
buf[a++] = '-';
}
buf[a] = '\0';
return (_reverse(buf, 0, a - 1));
}

/**
 * print_decimal - prints decimals and integers
 * @n: int to print
 * Return: Always 0 (success)
 */
int sign_decimal(int n)
{
int i;
char buf[12];
_itoa(n, buf, 10);
for (i = 0; buf[i]; i++)
{
putchar(buf[i]);
}
return (0);
}

/**
 * sign_char - prints a character
 * Return: character
 */
int sign_char(char s)
{
return (write(1, &s, 1));
}

/**
 * sign_string - prints string
 * @s: input string
 * Return: write
 */
int sign_string(char *s)
{
int len;
const char *ts;
if (s == NULL)
{
return (1);
}
if (!*s) 
{
ts = "(null)";
printing(ts);
}
else
{
for (len = 0; s[len]; len++)
{
putchar(s[len]);
}
}
return (len);
}

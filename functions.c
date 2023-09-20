#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * num_binary - prints decimals in binary
 * @n: int to print
 * Return: binary
 */
unsigned int num_binary(unsigned int n)
{
if (n / 2)
num_binary(n / 2);
_putchar(n % 2 + '0');
return (n);
}
/**
 * sign_unsigned - prints unsigned int
 * @n: int to print
 * Return: unsigned int
 */
unsigned int sign_unsigned(unsigned int n)
{
if (n / 10)
sign_unsigned(n / 10);
_putchar(n % 10 + '0');
return (n); 
}
/**
 * sign_octal - prints decimals in octal
 * @n: int to print
 * Return: octal
 */
unsigned int sign_octal(unsigned int n)
{
if (n / 8)
sign_octal(n / 8);
_putchar(n % 8 + '0');
return (n);
}
/**
 * sign_hexa - prints decimals in hexa
 * @n: int to print
 * Return: hexa
 */
unsigned sign_hexa(unsigned int n)
{
if (n / 16)
sign_hexa(n / 16);
_putchar(n % 16 + '0');
return (n);
}
/**
 * sign_HEXA - prints decimals in HEXA
 * @n: int to print
 * Return: HEXA
 */
unsigned sign_HEXA(unsigned int n)
{
int i;
char buf[32];
if (n / 16)
sign_hexa(n / 16);
_putchar(n % 16 + '0'); 
return (n);
}

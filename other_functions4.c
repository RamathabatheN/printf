#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "main.h"

/**
 * print_rot13string - Print a string in rot13
 * @str: input string
 * Return: count
 */
int print_rot13string(const char *str)
{
char print;
unsigned int a, b;
int count = 0;
char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
if (str == NULL)
return (-1);
for (a = 0; str[a]; a++)
{
for (b = 0; input[b]; b++)
{
if (input[b] == str[a])
{
print = output[b];
putchar(print);
count++;
break;
}
}
if (!input[b])
{
print = str[a];
putchar(print);
count++;
}
}
return (count);
}

/**
 * print - print (null)
 * @s: input integer
 * Return: length
 */
int print(char *s)
{
int length;
for (length = 0; s[length] != '\0'; length++)
{
putchar(s[length]);
}
return (length);
}

/**
 * print_andCount - print and count characters in a string
 * @str: input string
 * Return: counter
 */
int print_andCount(const char *str)
{
int counter = 0;
int len = 0;
while (str[len] != '\0')
{
putchar(str[len]);
if (str[len] != ' ' && str[len] != '\n')
{
counter++;
}
len++;
}
return (counter);
}

/**
 * counting_digits - counts digits
 * @num: input integer
 * @base: base of the number
 * Return: counter
 */
int counting_digits(int num, int base)
{
int counter = 0;
while (num != 0)
{
int digit = num % base;
if (digit >= 0 && digit <= 9)
{
counter++;
}
num /= base;
}
return (counter);
}

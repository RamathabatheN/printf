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
int print_rot13string(char *str)
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


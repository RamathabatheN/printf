#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string input
 * Return: void
 */
void rev_string(const char *str)
{
int top = 0;
int a;
while (*str != '\0')
{
top++;
str++;
}
str--;
for (a = top; a > 0; a--)
{
putchar(*str);
str--;
}
putchar('\n');
}

 
/**
 * _swap - swaps variables
 * @x: first variable
 * @y: second variable
 * Return: void
 */
void _swap(char *x, char *y)
{
char temp;
temp = *x;
*x = *y;
*y = temp;
}
 
/**
 * _reverse - reverses string
 * @buf: input string
 * @a:
 * @b:
 * Return: reversed string
 */
char *_reverse(char *buf, int a, int b)
{
while (a < b)
{
_swap(&buf[a++], &buf[b--]);
}
return (buf);
}

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * rev_string - Reverses a string
 * @s: string input
 * Return: void
 */
void rev_string(char *str)
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
_putchar(*str);
str--;
}
_putchar('\n');
}

/**
 * _strlen - returns string length
 * @st: string input
 * Return: string length
 */
size_t _strlen(const char *st)
{
size_t len = 0;
while (*st != '\0')
{
len++;
st++;
}
return len;
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

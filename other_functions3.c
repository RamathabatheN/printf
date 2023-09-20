#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

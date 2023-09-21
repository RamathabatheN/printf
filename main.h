#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <stddef.h>
#include <stdint.h>

/**
 * struct sign - Struct sign
 *
 * @sign: The operator
 * @f: The function associated
 */
/*typedef struct sign
{
char *signed;
int (*f)(int a);
} sig_n;*/

void prints(const char *format, va_list more);
int _putchar(char c);
int _abs(int n);
void _swap(char *x, char *y);
char *_reverse(char *buf, int a, int b);
void rev_string(char *str);
size_t _strlen(const char *st);
char *_itoa(int given, char *buf, int base);
int sign_decimal(int n);
int num_binary(unsigned int n);
int sign_unsigned(unsigned int n);
int sign_octal(unsigned int n);
int sign_hexa(unsigned int n);
int sign_HEXA(unsigned int n);
char sign_per(void);
int sign_char(char s);
ssize_t sign_string(char *s);
int _printf(const char *format, ...);
void print_buf(char buffer[], int *buff_ind);

#endif

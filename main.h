#ifndef MAIN_H
#define MAIN_H
#define BUFF_SIZE (1024)

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

int prints(const char *format, va_list more);
int _putchar(char c);
int _abs(int n);
void _swap(char *x, char *y);
char *_reverse(char *buf, int a, int b);
void rev_string(char *str);
size_t _strlen(const char *st);
int _strlens(char *st);
char *_itoa(int given, char *buf, int base);
int sign_decimal(int n);
int num_binary(unsigned int n);
int sign_unsigned(unsigned int n);
int sign_octal(unsigned int n);
int sign_hexa(unsigned int n);
int sign_HEXA(unsigned int n);
char sign_per(void);
int sign_char(char s);
int sign_string(char *s);
int _printf(const char *format, ...);
void print_buf(char buffer[], int *buff_ind);
int print_rot13string(char *str);
void addresses(void *i);
int non_printable(char *buffer);
int sign_HEXAs(unsigned int n);
int count_characters(const char *str);
int count_digits(int n);

#endif

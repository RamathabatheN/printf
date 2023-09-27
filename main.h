#ifndef MAIN_H
#define MAIN_H
#define BUFF_SIZE (1024)

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>
#include <stddef.h>

int _abs(int n);
void _swap(char *x, char *y);
char *_reverse(char *buf, int a, int b);
void rev_string(const char *str);
int _strlens(const char *st);
char *_itoa(int given, char *buf, int base);
int sign_decimal(int a);
int num_binary(unsigned int a);
int sign_unsigned(unsigned int a);
int sign_octal(unsigned int a);
int sign_hexa(unsigned int n);
int sign_HEXA(unsigned int n);
char sign_per(void);
int sign_char(char s);
int sign_string(const char *s);
int _printf(const char *format, ...);
int print_rot13string(const char *str);
void addresses(void *i);
int non_printable(const char *buffer);
int print(char *s);
int print_andCount(const char *str);
int counting_digits(int num, int base);


#endif

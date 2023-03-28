#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int my_char(va_list list, int x);
int _unsigned(unsigned int num, int x);
int _octal(unsigned int num, int x);
int print_pointer(va_list list, int x);
int printf_binary(unsigned int num, int x);
int _hex(unsigned int num, int x, int upper_case);
int print_reverse(va_list list, int x);
int checker(const char *format, va_list list, int x);
int printf_int(va_list list, int x);
int print_string(va_list list, int x);

#endif

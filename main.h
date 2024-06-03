#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>


/**
 * struct func_type - type structure
 * @t: pointer to the argument
 * @f: pointer-function associated with the argument
 */
typedef struct func_type
{
	char *t;
	int (*f)(va_list);
} func_t;

int (*caller(const char *format))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list args);
int print_char(va_list args);
int print_pct(va_list args);
int print_dec(va_list args);
int print_bin(va_list args);
int print_un(va_list args);
int print_oct(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);

#endif

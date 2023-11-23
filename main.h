#ifndef MAIN_H_PRINTF
#define MAIN_H_PRINTF

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct specifier_d
{
	char *specifier;
	int (*fonction)(va_list);
} specifier_t;

int _printf(const char *format, ...);
int (*get_fonctions(char *specifier))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_modulo(va_list args);
int print_integer(va_list args);
int print_decimal(va_list args);
int _putchar(char c);

#endif

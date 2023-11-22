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
int (*get_fontions(char *specifier))(va_list);
int print_char(char charac);
int print_string(char *string);
int print_modulo(void);
int print_integer(int integer);
int _putchar(char c);

#endif

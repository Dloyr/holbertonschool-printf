#include "main.h"

int _printf(const char *format, ...)
{
	int index = 0;
	int length = 0;
	va_list args;

	va_start(args, format);

	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
		}
		else
		{
			char specifier = format[index + 1];
			int (*print_functions)(va_list) = *get_fonctions(&specifier);
		}
		length++;
		index++;
	}
	va_end(args);
	return (length);
}

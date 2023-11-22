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
		else if (format[index + 1] == 'c')
		{
			length += print_char(va_arg(args, int));
			index++;
		}
		else if (format[index + 1] == 's')
		{
			length += print_string(va_arg(args, char *));
			index++;
		}
		else if (format[index + 1] == '%')
		{
			length += print_modulo();
			index++;
		}
		else if (format[index + 1] == 'd' || format[index + 1] == 'i')
		{
			length += print_integer(va_arg(args, int));
			index++;
		}
		else
		{
			_putchar(format[index]);
		}
		length++;
		index++;
	}
	va_end(args);
	return (length);
}

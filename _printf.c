#include "main.h"

int _printf(const char *format, ...)
{
	int index = 0;
	int length = 0;
	
	va_list args;
	int (*print_functions)(va_list);

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
			print_functions = get_fonctions(&specifier);

			if (print_functions != NULL)
			{
				length += print_functions(args);
				index++; 
			}
			else
			{
				_putchar(format[index]); 
			}
		}
		length++;
		index++;
	}
	va_end(args);
	return (length);
}

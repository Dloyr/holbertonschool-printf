#include "main.h"

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

int print_string(va_list args)
{
	char *string = va_arg(args, char *);
	int index;

	for (index = 0; string[index] != '\0'; index++)
	{
		_putchar(string[index]);
	}
	return (index);
}

int print_modulo(va_list args)
{
	_putchar('%');
	return (1);
}

int print_integer(va_list args)
{
//	int num_string;
//	int length;
//
//	
//	for (length = 0; num_string[length] != '\0'; length++)
//	{
//		_putchar(num_string[length]);
//	}
	return (integer);
}

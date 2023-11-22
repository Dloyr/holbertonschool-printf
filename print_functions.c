#include "main.h"

int print_char(char character)
{
	_putchar(character);
	return (1);
}

int print_string(char *string)
{
	int index;

	for (index = 0; string[index] != '\0'; index++)
	{
		_putchar(string[index]);
	}
	return (index);
}

int print_modulo(void)
{
	_putchar('%');
	return (1);
}

int print_integer(int integer)
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

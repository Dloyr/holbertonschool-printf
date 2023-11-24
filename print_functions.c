#include "main.h"
/**
*print_char - print a character
*@args: argument
*Return: 1
*/
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
*print_string - print a string
*@args: argument
*Return: index
*/
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
/**
*print_modulo- print a percent
*@args: argument
*Return: 1
*/
int print_modulo(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
/**
*print_decimal - print a decimal
*@args: argument
*Return: length
*/
int print_decimal(va_list args)
{
	int decimal = (va_arg(args, int));
	int digit = 0;
	int reverse = 0;
	int length = 0;

	if (decimal < 0)
	{
		_putchar('-');
		length += 1;
		decimal *= -1;
	}

	while (decimal > 0)
	{
		digit = decimal % 10;
		reverse = reverse * 10 + digit;
		decimal = decimal / 10;
	}

	while (reverse > 0)
	{
		digit = reverse % 10;
		_putchar(digit + '0');
		reverse /= 10;
		length++;
	}
	return (length);
}
/**
*print_integer - print a integer
*@args: argument
*Return: length
*/
int print_integer(va_list args)
{
	int integer = (va_arg(args, int));
	int digit = 0;
	int reverse = 0;
	int length = 0;

	if (integer < 0)
	{
		_putchar('-');
		length += 1;
		integer *= -1;
	}

	while (integer > 0)
	{
		digit = integer % 10;
		reverse = reverse * 10 + digit;
		integer = integer / 10;
	}

	while (reverse > 0)
	{
		digit = reverse % 10;
		_putchar(digit + '0');
		reverse /= 10;
		length++;
	}
	return (length);
}

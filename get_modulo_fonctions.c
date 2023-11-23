#include "main.h"
#include "stdlib.h"

int (*get_fonctions(char *letter))(va_list)
{
	specifier_t fonction_pointeur[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_modulo},
		{"i", print_integer},
		{"d", print_decimal},
		{NULL, NULL}
	};
	int index = 0;

	while (fonction_pointeur[index].specifier != NULL)
	{
		if (fonction_pointeur[index].specifier[0] == letter[0])
		{
				return (fonction_pointeur[index].fonction);
		}
		index++;
	}
	return (NULL);
}

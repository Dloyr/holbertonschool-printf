#include "main.h"
#include "stdlib.h"
/**
*get_fonctions - function pointer between the character and the good function
*@letter: pointer contain letter associate to function
*Return: NULL
*/
int (*get_fonctions(char *letter))(va_list)
{
	specifier_t fonction_pointeur[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_modulo},
		{"d", print_decimal},
		{"i", print_integer},
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

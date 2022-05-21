#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 *printf_controller - function that controles the specifiers
 *
 *@s: The character the specifies behavior
 *Return: an integer of number of characters printed, 0 if unssuccesful
 */
int (*printf_controller(char s))(va_list)
{
	func functions[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_signedint},
		{"i", _print_signedint},
		{"b", _print_binary},
		{"u", _print_unsignedint},
		{"o", _print_octal},
		{NULL, NULL}
	};

	int i = 0;

	if (!s)
		return (NULL);
	while (functions[i].spec != NULL)
	{
		if (s == *(functions[i].spec))
		{
			return (functions[i].f);
		}
		i++;
	}
	return (NULL);
}

#include "main.h"
#include <stdarg.h>

/**
 *_print_octal - Prints an integer in its octal form
 *
 *@args: A va_list of variable arguments
 *Return: integer number of digits printed
 */
int _print_octal(va_list args)
{
	char *str;

	int count = 0;

	unsigned int n = va_arg(args, unsigned int);

	str = convert_to(n, 8, 0);
	_puts(str);
	count = _strlen(str);
	return (count);
}

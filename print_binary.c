#include "main.h"
#include <stdarg.h>

/**
 *_print_binary - Function prints the binary equivalent of an unsigned int
 *
 * @args: Number to be converted
 *
 * Return: void(for now)
 */
int _print_binary(va_list args)
{
	int i = va_arg(args, int), count = 0;

	char *s;

	s = convert_to(i, 2);
	_puts(s);
	count = _strlen(s);
	return (count);
}

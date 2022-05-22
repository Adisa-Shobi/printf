#include "main.h"
#include <stdarg.h>

/**
 *_print_upper_hexadecimal - prints an integer in hexadecimal uppercase
 *
 *@args: A list of variable arguments
 *Return: An integer of number of characters printed
 */

int _print_upper_hexadecimal(va_list args)
{
	char *str;

	unsigned int i = 0, count = 0;

	i = va_arg(args, unsigned int);
	str = convert_to(i, 16, 1);
	_puts(str);
	count = _strlen(str);
	return (count);
}

/**
 *_print_lower_hexadecimal - print an integer in hexadecimal lowercase
 *
 *@args: A list of variable arguments
 *Return: an integer count of number of characters
 */
int _print_lower_hexadecimal(va_list args)
{
	char *str;

	unsigned int i = 0, count = 0;

	i = va_arg(args, unsigned int);
	str = convert_to(i, 16, 0);
	_puts(str);
	count = _strlen(str);
	return (count);
}

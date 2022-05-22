#include <stdarg.h>
#include "main.h"

/**
 * _print_signedint - prints integer using putchar
 *
 * @args: integer to be printed
 * Return: count of characters printed
 */
int _print_signedint(va_list args)
{
	char *str;

	int n = va_arg(args, int), count = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	str = convert_to(n, 10, 0);
	_puts(str);
	count = _strlen(str);
	return (count);
}

/**
 * _print_unsignedint - prints integer using putchar
 *
 * @args: integer to be printed
 * Return: count of characters printed
 */
int _print_unsignedint(va_list args)
{
	char *str;

	int n = va_arg(args, unsigned int), count = 0;

	str = convert_to(n, 10, 0);
	_puts(str);
	count = _strlen(str);
	return (count);
}

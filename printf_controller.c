#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 *printf_controller - function that controles the specifiers
 *
 *@s: The character the specifies behavior
 *@list: The list of agruments
 *Return: an integer of number of characters printed, 0 if unssuccesful
 */
int printf_controller(char s, va_list list)
{
	char *str;

	if (!s)
		return (0);
	switch (s)
	{
	case 'c':
		_putchar(va_arg(list, int));
		return (1);
	case 's':
		str = va_arg(list, char *);
		_puts(str);
		return (_strlen(str));
	case '%':
		_putchar('%');
		return (1);
	case 'n':
		_putchar('\n');
		return (1);
	case 't':
		_putchar('\t');
		return (1);
	case 'd':
	case 'i':
		return (print_number(va_arg(list, int)));
	case 'b':
		print_binary(va_arg(list, int));
		return (0);
	}
	_putchar(s);
	return (1);
}

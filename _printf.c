#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Prints test file
 * @format: Format of output
 * Return: An integer
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	f_ptr print_func;
	char curr;
	va_list args;

	va_start(args, format);
	if (!format || (_strlen((char *)format) == 0))
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		curr = format[i];
		if (curr == '%')
		{
			i++;
			curr = format[i];
			if (curr == '\0' && _strlen((char *)format) == 1)
				return (-1);
			if (curr == '\0')
				return (count);
			if (curr)
				print_func = printf_controller(curr);
			if (print_func != NULL)
				count += print_func(args);
			else if (curr == '%')
				count += _putchar(curr);
			else
			{
				count += _putchar('%');
				count += _putchar(curr);
			}
		}
		else
			count += _putchar(curr);
		i++;
	}
	va_end(args);
	return (count);
}

/**
 *print_handler - handles and checks for specifiers
 *
 *@
 *
 */

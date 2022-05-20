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
	int i, count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0 ; format[i] != '\0' ; i++)
	{
		if (format[i] == '%' || format[i] == '\\')
		{
			i++;
			count += printf_controller(format[i], args);
		}
		else
		{
			_putchar(format[i]);
			count += 1;
		}
	}
	return (count);
}

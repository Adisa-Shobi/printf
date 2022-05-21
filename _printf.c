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

	char curr;

	va_list args;

	va_start(args, format);
	if (!format || (_strlen((char *)format) == 0))
	{
		return (-1);
	}

	for (i = 0 ; format[i] != '\0' ; i++)
	{
		curr = format[i];
		if (curr == '%' || format[i] == '\\')
		{
			i++;
			curr = format[i];
			if (curr == '\0' && _strlen((char *)format) == 1)
				return (-1);
			if (curr == '\0')
				return (count);
			count += printf_controller(curr, args);
		}
		else
		{
			_putchar(curr);
			count += 1;
		}
	}
	return (count);
}

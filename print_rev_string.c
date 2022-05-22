#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _print_rev_string - Prints reversed string
 *
 *@args: A va_list containing string
 * Return: lenght of the string printed
 */
int _print_rev_string(va_list args)
{
	char *str;
	int i, count = 0;

	str = va_arg(args, char*);
	if (str == NULL)
		str = ")llun(";
	i = _strlen(str);
	for (i -= 1 ; i >= 0 ; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}

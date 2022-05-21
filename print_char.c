#include "main.h"
#include <stdarg.h>

/**
 *_print_char - Prints a character
 *
 *@args: A va_list containing character
 *
 *Return: The integer 1 because it prints only a character
 */
int _print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

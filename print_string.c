#include <stdarg.h>
#include "main.h"

/**
 *_print_string - prints string specified by args
 *
 *@args: A list of variable inputs
 *
 *Return: An integer of number of characters printed
 */
int _print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
	{
		str = "(null)";
		_puts(str);

		return (_strlen(str));
	}
	_puts(str);
	return (_strlen(str)); /* might be k + 1 */
}

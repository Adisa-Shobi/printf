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
	int k = 0;

	char *str = va_arg(args, char *);

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	return (k); /* might be k + 1 */
}

#include "main.h"
#include <stdarg.h>

/**
 *_print_rot13 - Rotates the alphabet by 13 places
 *
 *@args: Strings
 *Return: An array of characters
 */
int _print_rot13(va_list args)
{
	char *s = va_arg(args, char *);
	int i, j, count;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	_puts(s);
	count = _strlen(s);
	return (count);
}

#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>


/**
 *convert_to - converts an unsigned integer to base n
 *
 *@base: Working base
 *@i: integer
 *Return: The string to return
 */
char *convert_to(unsigned int i, int base, ...)
{
	va_list mode;

	char *ptr, U;

	static char buffer[128];

	int mod = 0;

	char *conversion;

	conversion = malloc(sizeof(char) * 17);
	va_start(mode, base);
	U = va_arg(mode, int);
	if (U == 1)
		conversion = _strcpy(conversion, "0123456789ABCDEF");
	else
		conversion = _strcpy(conversion, "0123456789abcdef");

	ptr = &buffer[127];
	*ptr = '\0';

	while (i != 0)
	{
		mod = i % base;
		*--ptr = conversion[mod];
		i = i / base;
	}
	return (ptr);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1. on error, -1 is returned and errno is
 * set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - reset number
 * Description: This function return a length for some string
 *
 * @s: pointer char
 * Return: int length
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}

	return (len);
}

/**
 * _puts - prints a string s
 *
 * @s: string to print
 * Return: the length of the string
 */
void _puts(char *s)
{
	int i = 0;

	while (i < _strlen(s))
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 *_strcpy - copies one string to another
 *
 *@dest: The destination string
 *@src: The source string
 *Return: The destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len  = _strlen(src);
	for (i = 0 ; i <= len ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

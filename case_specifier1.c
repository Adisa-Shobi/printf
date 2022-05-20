#include "main.h"

/**
 * _puts - prints a string s
 *
 * @s: string to print
 * Return: the length of the string
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
/**
 * print_number - prints integer using putchar
 *
 * @n: integer to be printed
 * Return: count of characters printed
 */
int print_number(int n)
{
	unsigned int n1, count = 0;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		count += 1;
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
	count += 1;
	return (count);
}
/**
 * print_binary - Function prints the binary equivalent of an unsigned int
 *
 * @num: Number to be converted
 *
 * Return: void(for now)
 */
void print_binary(unsigned int num)
{
	if (num == 0)
		_putchar('0');
	if (num >= 2)
	print_binary(num / 2);
	_putchar((num % 2) + '0');
}

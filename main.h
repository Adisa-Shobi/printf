#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef int (*f_ptr)(va_list args);
typedef struct Functions
{
	char *spec;
	int (*f)(va_list args);
} func;
int _putchar(char c);
void _puts(char *s);
int _printf(const char *format, ...);
int (*printf_controller(char s))(va_list);
int _strlen(char *s);
int _print_string(va_list args);
int _print_signedint(va_list args);
int _print_unsignedint(va_list args);
int _print_char(va_list args);
char *convert_to(unsigned int i, int base);
int _print_binary(va_list args);
int _print_octal(va_list args);

#endif /* MAIN_H */

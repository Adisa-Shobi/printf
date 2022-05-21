#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _puts(char *s);
int _printf(const char *format, ...);
int printf_controller(char s, va_list list);
int _strlen(char *s);
int print_number(int n);
void print_binary(unsigned int num);

#endif /* MAIN_H */

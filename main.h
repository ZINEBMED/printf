#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int print_char(va_list args);
int print_string(va_list args);
int _strlen(char *s);
int print_integer(va_list args);
int (*get_func(char c))(va_list);

/**
 * struct format_specificateur - description
 * @format : format
 * @fonction : fonction
 */
typedef struct format_specificateur
{
	char format;
	int (*fonction)(va_list);
}
fs;
#endif

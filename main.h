#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_hex(va_list args);


void _puts(char *str);

int _strlen(char *s);

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
} fs;
#endif

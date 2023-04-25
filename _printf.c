#include "main.h"
#include <stdarg.h>
/**
 * _printf - entry point
 * @format: le format a traiter
 * Return: its depends
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int (*ptr_f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (*format)
	{
	if (*format == '%')
	{
	format++;
	if (*format == '\0')
	return (-1);
	if (*format == '%')
	count += _putchar('%'), format++;
	else
	{
	ptr_f = get_func(*format);
	if (ptr_f != NULL)
	count += ptr_f(args);
	else
	count += _putchar('%'), count += _putchar(*format);
	format++;
	}
	}
	else
	count += _putchar(*format), format++;
	}
	va_end(args);

	return (count);
}
/**
 * get_func - the function that call the functions
 * @c: the format to check
 * Return: its depends on the format vn
 */

int (*get_func(char c))(va_list)
{
	fs specificator[] = {
	{'c', print_char},
	{'s', print_string},
	{'i', print_integer},
	{'d', print_integer},
	{0, NULL}
	};
	int index;

	index = 0;
	while (specificator[index].format != 0)
	{
		if (c == specificator[index].format)
		{
			return (specificator[index].fonction);
	}
		index++;
	}
	return (NULL);
	}

#include "main.h"
#include <stdarg.h>
/**
 * _printf - entry function
 * @format: the format to print
 *
 * Return: its depends
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int (*ptr_f)(va_list);

	va_start(args, format);
	while (*format)
	{
	if (*format == '%')
	{
	format++;
	if (*format == '\0')
	break;
	if (*format == '%')
	count += _putchar('%'), format++;
	else
	{
	ptr_f = get_func(*format);
	if (ptr_f != NULL)
	{
	count += ptr_f(args);
	}
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
 * get_func - select the function to call
 * @c: specifecator
 *  Return: Number of characters printed
 */
int (*get_func(char c))(va_list)
{
	fs specificator[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'x', print_hex},
		{0, NULL}
	};
	int index;

	index = 0;
	while (specificator[index].format != 0)
	{
	if (c == specificator[index].format)
		return (specificator[index].fonction);
	index++;
	}
	return (NULL);
}

#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: The specified format.
 *
 * Return: The number of characters that were printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
		va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
	if (*format == '%')
	{
	format++;
	switch (*format)
	{
	case 'c':
	putchar(va_arg(args, int));
	count++;
	break;
	case 's':
	count += printf("%s", va_arg(args, char *));
	break;
	case '%':
	putchar('%');
	count++;
	break;
	default:
	putchar(*format);
	count++;
	break;
	}
	}
	else
	{
	putchar(*format);
	count++;
	}
	format++;
	}
	va_end(args);
	return (count);
}

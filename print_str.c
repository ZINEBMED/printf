#include "main.h"
/**
 * Prints a null-terminated string argument to the standard output.
 *
 * @param args the variable arguments list containing the string to print
 * @return the number of characters printed
 */

static int _print_string(const char *str);

int print_string(va_list args)
{
	return (_print_string(va_arg(args, const char *)));
}

static int _print_string(const char *str)
{
	int count;

	count = 0;

	while (*str)
	{
	_putchar(*str++);
	count++;
	}
return (count);
}

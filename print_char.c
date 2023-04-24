#include"main.h"
#include <stdarg.h>
/**
 * print_char - Prints a character
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

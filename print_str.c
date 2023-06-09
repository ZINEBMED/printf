#include"main.h"
#include <stdarg.h>
/**
 * print_string - Prints a character
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	str = "(null)";
	_puts(str);
	return (_strlen(str));
}

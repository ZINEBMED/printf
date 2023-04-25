#include "main.h"

static int _print_string(const char *str);
/**
* print_string - A function that prints a string to the standard output.
*
*@args : list of arguments.
*Return: the characters printed.
*/
int print_string(va_list args)
{
	return (_print_string(va_arg(args, const char *)));
}

/**
 * _print_string - a null-terminated string argument to the standard output.
 *
 * @str: args the variable arguments list containing the string to print
 * Return: the number of characters printed
 */
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

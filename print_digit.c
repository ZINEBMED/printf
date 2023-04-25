#include "main.h"
#include <limits.h>

static int _print_int(int value, int width);
/**
 * print_int - entry function
 * @args: the value
 * Return: argument to print
 */
int print_int(va_list args)
{
	return (_print_int(va_arg(args, int), 0));
}
/**
 * _print_int - entry function
 * @value: the value
 * @width: the width
 * Return: the reuslt of function
 */
static int _print_int(int value, int width)
{
	char buffer[12];
	int i, count;
	unsigned int temp_value;

	i = 0;
	count = 0;

	if (value == 0)
	{
	_putchar('0');
	return (1);
	}
	if (value < 0)
	{
	_putchar('-');
	temp_value = (unsigned int)(-(value + 1)) + 1;
	count++;
	}
	else
	{
	temp_value = (unsigned int)value;
	}
	while (temp_value > 0)
	{
		buffer[i++] = '0' + (temp_value % 10);
		temp_value /= 10;
	}
	while (width > i)
	{
		_putchar('0');
		width--;
		count++;
	}
	while (i > 0)
	{
		_putchar(buffer[--i]);
		count++;
	}
	return (count);
}

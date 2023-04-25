#include "main.h"

static int _print_int(int value, int width);

int print_int(va_list args)
{
    return _print_int(va_arg(args, int), 0);
}




static int _print_int(int value, int width)
{
	char buffer[12]; 
	int i, count;

	i = 0;
	count = 0;

	if (value == 0)
	{
		_putchar('0');
		return 1;
	}

	if (value < 0)
	{
		_putchar('-');
		value = -value;
		count++;
	}

	while (value > 0)
	{
		buffer[i++] = '0' + (value % 10);
		value /= 10;
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

	return count;
}

#include "main.h"

static int _print_hex(unsigned int value, int width);

int print_hex(va_list args)
{
    return _print_hex(va_arg(args, unsigned int), 0);
}



static int _print_hex(unsigned int value, int width)
{
    char buffer[9]; 
    int i, count;

    i = 0;
    count = 0;

    if (value == 0)
    {
        _putchar('0');
        return 1;
    }

    while (value > 0)
    {
        int digit = value % 16;
        buffer[i++] = (digit < 10) ? '0' + digit : 'A' + (digit - 10);
        value /= 16;
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

#include "main.h"

static int _print_string(const char *str);

int print_string(va_list args)
{
    return _print_string(va_arg(args, const char *));
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

    return count;
}

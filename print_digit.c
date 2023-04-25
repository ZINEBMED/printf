#include "main.h"
/**
 * print_integer - Prints an integer to the stdo
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;
	int zeros = 0;
	int i = 0;
	int digits[10];

	if (n == 0)
	return (_putchar('0'));

	if (n < 0)
	{
	_putchar('-');
	count++;
	num = -n;
	}
	else
	num = n;

	while (num != 0)
	{
	digits[i] = num % 10;
	num /= 10;
	i++;
	}

	while (i > 0)
	{
	i--;
	_putchar(digits[i] + '0');
	count++;
	}

	while (zeros-- > 0)
	{
	_putchar('0');
	count++;
	}

	return (count);
}

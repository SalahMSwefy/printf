#include "main.h"

/**
 *_printf_int - Custom printf function for integers
 *@list: arguments
 *Return: The number of characters printed
 */
int _printf_int(va_list list)
{
	int n = va_arg(list, int), div = 1, len = 0;
	unsigned int num = n;

	if (n < 0)
	{
		len += _putchar('-');
		num = -n;
	}

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 *_printf_unsigned - prints an unsigned integer.
 *@list: arguments.
 *Return: The number of characters printed.
 */
int _printf_unsigned(va_list list)
{
	int len = 0;
	unsigned int n = va_arg(list, unsigned int);
	unsigned int r = 0, last = n % 10;

	n /= 10;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n)
	{
		r = r * 10 + n % 10;
		n /= 10;
	}

	while (r)
	{
		_putchar(r % 10 + '0');
		r /= 10;
		len++;
	}

	_putchar(last + '0');
	return (len);
}

#include "main.h"

/**
 *_printf_string - prints a string.
 *@list: arguments.
 *Return: The number of characters printed.
 */
int _printf_string(va_list list)
{
	char *str;
	int cntr = 0;

	str = va_arg(list, char *);
	while (str[cntr])
	{
		_putchar(str[cntr]);
		cntr++;
	}

	return (cntr);
}

/**
 *_printf_char - prints a character.
 *@list: arguments.
 *Return: The number of characters printed.
 */
int _printf_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}

/**
 *_printf_perc - prints %.
 *Return: The number of characters printed.
 */
int _printf_perc(void)
{
	_putchar('%');
	return (1);
}

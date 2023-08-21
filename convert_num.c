#include "main.h"

/**
 *_printf_binary - prints a binary number.
 *@list: arguments.
 *Return: The number of characters printed.
 */
int _printf_binary(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int cntr = 0;
	int binary[32];
	int i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	i = 0;

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
		cntr++;
	}

	return (cntr);
}

/**
 *_printf_HEXA - prints a hexadecimal number (uppercase).
 *@list: arguments.
 *Return: The number of characters printed.
 */

int _printf_HEXA(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char hexa[] = "0123456789ABCDEF";
	int cntr = 0, shift, nibble;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (shift = sizeof(num) * 8 - 4; shift >= 0; shift -= 4)
	{
		nibble = (num >> shift) & 0xF;
		_putchar(hexa[nibble]);
		cntr++;
	}

	return (cntr);
}

/**
 *_printf_hexa - prints a hexadecimal number (lowercase).
 *@list: arguments.
 *Return: The number of characters printed.
 */
int _printf_hexa(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char hexa[] = "0123456789abcdef";
	int cntr = 0, shift, nibble;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (shift = sizeof(num) * 8 - 4; shift >= 0; shift -= 4)
	{
		nibble = (num >> shift) & 0xF;
		_putchar(hexa[nibble]);
		cntr++;
	}

	return (cntr);
}

/**
 *_printf_octal - prints a octal number.
 *@list: arguments.
 *Return: The number of characters printed.
 */
int _printf_octal(va_list list)
{
	char *res;
	unsigned int num = va_arg(list, unsigned int);
	int cntr = 0, l = 0, j;

	res = malloc(sizeof(char) * 12);
	if (res == NULL)
		return (-1);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		res[l] = '0' + (num % 8);
		num /= 8;
		cntr++;
		l++;
	}

	for (j = l - 1; j >= 0; j--)
		_putchar(res[j]);
	free(res);
	return (cntr);
}

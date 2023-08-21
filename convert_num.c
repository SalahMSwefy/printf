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
	char *res;
	unsigned int num = va_arg(list, unsigned int);
	char hexa[] = "0123456789ABCDEF";
	int cntr = 0, l = 0;

	res = malloc(sizeof(char) * 9);
	if (res == NULL)
		return (-1);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		res[l] = hexa[num % 16];
		num /= 16;
		l++;
		cntr++;
	}

	while (l--)
		_putchar(res[l]);
	free(res);
	return (cntr);
}

/**
 *_printf_hexa - prints a hexadecimal number (lowercase).
 *@list: arguments.
 *Return: The number of characters printed.
 */
int _printf_hexa(va_list list)
{
	char *res;
	unsigned int num = va_arg(list, unsigned int);
	char hexa[] = "0123456789abcdef";
	int cntr = 0, l = 0;

	res = malloc(sizeof(char) * 9);
	if (res == NULL)
		return (-1);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		res[l] = hexa[num % 16];
		num /= 16;
		l++;
		cntr++;
	}

	while (l--)
		_putchar(res[l]);
	free(res);
	return (cntr);
}

/**
 *_printf_octal - prints a octal number.
 *@list: arguments.
 *Return: The number of characters printed.
 */
int _printf_octal(va_list list)
{
	int *res;
	unsigned int num = va_arg(list, unsigned int);
	int cntr = 0, l = 0;

	res = malloc(sizeof(int) * 12);
	if (res == NULL)
		return (-1);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		res[l] = (num % 8);
		num /= 8;
		cntr++;
		l++;
	}

	while (l--)
		_putchar(res[l] + '0');
	free(res);
	return (cntr);
}

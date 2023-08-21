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
	unsigned int num = va_arg(list, unsigned int), temp = num;
	char hexa[] = "0123456789ABCDEF";
	int cntr = 0, i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (temp)
	{
		cntr++;
		temp /= 16;
	}
	res = malloc(sizeof(char) * cntr);
	if (res == NULL)
		return (-1);

	for (i = 0; i < cntr; i++)
	{
		res[i] = hexa[num % 16];
		num /= 16;
	}

	for (i = cntr - 1; i >= 0; i--)
		_putchar(res[i]);
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
	unsigned int num = va_arg(list, unsigned int), temp = num;
	char hexa[] = "0123456789abcdef";
	int cntr = 0, i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (temp)
	{
		cntr++;
		temp /= 16;
	}
	res = malloc(sizeof(char) * cntr);
	if (res == NULL)
		return (-1);

	for (i = 0; i < cntr; i++)
	{
		res[i] = hexa[num % 16];
		num /= 16;
	}

	for (i = cntr - 1; i >= 0; i--)
		_putchar(res[i]);
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
	unsigned int num = va_arg(list, unsigned int), temp = num;
	int cntr = 0, i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (temp)
	{
		cntr++;
		temp /= 8;
	}
	res = malloc(sizeof(int) * cntr);
	if (res == NULL)
		return (-1);

	for (i = 0; i < cntr; i++)
	{
		res[i] = (num % 8);
		num /= 8;
	}
	for (i = cntr - 1; i >= 0; i--)
		_putchar(res[i] + '0');
	free(res);
	return (cntr);
}

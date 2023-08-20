#include "main.h"

/**
 *_printf_rot13 - a function that encodes a string into rot13.
  *@list: arguments
 *Return: The number of characters printed
 */

int _printf_rot13(va_list list)
{
	int i, j, k;

	char real[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != 0; i++)
	{
		k = 0;
		for (j = 0; j < 53 && !k; j++)
		{
			if (s[i] == real[j])
			{
				_putchar(rot[j]);
				k = 1;
				break;
			}
		}

		if (!k)
			_putchar(s[i]);
	}

	return (i);
}

/**
 *_printf_str_rev - a function that prints a string by reverse.
  *@list: arguments
 *Return: The number of characters printed
 */
int _printf_str_rev(va_list list)
{
	int len = 0, i = 0;
	char *str = va_arg(list, char *);

	while (str[len] != 0)
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	return (len);
}

#include "main.h"
/**
 * _printf_ex_str - print exclusuives string.
 * Non printable characters (0 < ASCII value < 32 or >= 127)
 * are printed this way:\x followed by the ASCII code value
 * in hexadecimal (upper case - always 2 characters)
 * @list: argumen t.
 * Return: the length of the string.
 */

int _printf_ex_str(va_list list)
{
	int i, len = 0;
	int x;
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			x = s[i];
			if (x < 16)
			{
				_putchar('0');
				len++;
			}
			len +=  HEX(x);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}

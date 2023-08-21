#include "main.h"

/**
 * _printf_pointer - prints an hexgecimal number.
 * @list: arguments.
 * Return: The number of characters printed..
 */
int _printf_pointer(va_list list)
{
	void *p;
	char *s = "(nil)";
	unsigned long int a;
	int b;
	int i;

	p = va_arg(list, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = hex(a);
	return (b + 2);
}

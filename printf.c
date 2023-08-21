#include "main.h"
/**
 * _printf - a function that selects the function to print
 * according to the type.
 * @format: arguments to look for.
 * Return: the length of the string.
 */
int _printf(const char *const format, ...)
{
	va_list list;
	int i = 0, j, len = 0;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			j = checker(format[i], list);
			if (j < 0)
				return (-1);
			len += j;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(list);
	return (len);
}

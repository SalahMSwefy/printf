#include "main.h"
/**
 * _printf - a function that selects the function to print
 * according to the type.
 * @format: arguments to look for.
 * Return: the length of the string.
 */
int _printf(const char *const format, ...)
{
	paramter func[] = {
		{"s", _printf_string}, {"c", _printf_char}, {"%", _printf_perc},
		 {"i", _printf_int}, {"d", _printf_int}, {"r", _printf_str_rev}, 
		 {"R", _printf_rot13}, {"b", _printf_binary}, {"u", _printf_unsigned}, 
		 {"o", _printf_octal}, {"x", _printf_hexa}, {"X", _printf_HEXA}, 
		 {"S", _printf_ex_str}, {"p", _printf_pointer}, {NULL, NULL}};

	va_list list;
	int i = 0, j, len = 0, flag = 1;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			j = 0;
			while (func[j].type != NULL)
			{
				if (func[j].type[0] == format[i + 1])
				{
					len += func[j].f(list);
					i = i + 2;
					flag = 0;
					break;
				}
				j++;
			}
			if (flag)
			{
				_putchar('x');
				len++;
			}
		}
		_putchar(format[i]);
		len++;
	}
	va_end(list);
	return (len);
}
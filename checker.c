#include "main.h"

/**
 *checker - a function to check printf function to print.
 *@c: the type
 *@list: arguments.
 *Return: The number of characters printed.
 */
int checker(char c, va_list list)
{
	switch (c)
	{
		case 'i':
		case 'd':
			return (_printf_int(list));
		case 's':
			return (_printf_string(list));
		case 'c':
			return (_printf_char(list));
		case '%':
			return (_printf_perc());
		case 'u':
			return (_printf_unsigned(list));
		case 'b':
			return (_printf_binary(list));
		case 'o':
			return (_printf_octal(list));
		case 'x':
			return (_printf_hexa(list));
		case 'X':
			return (_printf_HEXA(list));
		case 'r':
			return (_printf_str_rev(list));
		case 'R':
			return (_printf_rot13(list));
		case 'S':
			return (_printf_ex_str(list));
		case 'p':
			return (_printf_pointer(list));
		default:
			return (_printf_unknown(c));
	}
}

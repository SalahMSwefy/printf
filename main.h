#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define buffer_size 1024
/**
 * struct format - match the Conversion parameters for printf
 * @type: type char pointer
 * @f: type pointer to function for the conversion parameters
 */
typedef struct format
{
	char *type;
	int (*f)();
} paramter;

int _putchar(char c);
int _printf(const char * const format, ...);
int _printf_int(va_list list);
int _printf_perc(void);
int _printf_str_rev(va_list list);
int _printf_rot13(va_list list);
int _printf_char(va_list list);
int _printf_string(va_list list);
int _printf_hexa(va_list list);
int _printf_HEXA(va_list list);
int _printf_octal(va_list list);
int _printf_binary(va_list list);
int _printf_unsigned(va_list list);
int _printf_ex_str(va_list list);
int _printf_pointer(va_list list);
int HEX(unsigned long int num);
int hex(unsigned long int num);

int run(const char *format, paramter f_list[], va_list arg_list);


#endif

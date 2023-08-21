#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define buffer_size 1024

int _putchar(char c);
int _printf(const char * const format, ...);
int checker(char c, va_list list);
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
int _printf_unsig(va_list list);
int _printf_ex_str(va_list list);
int _printf_pointer(va_list list);
int _printf_unknown(char c);
int HEX(unsigned long int num);
int hex(unsigned long int num);



#endif

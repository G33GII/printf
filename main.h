#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#define buffsize 1024
/**
 * struct _lst - new data type
 * @_chars: member of new data type
 * @_func: member of new data type
 * Return: 0
*/
struct _lst
{
	char _chars;
	int (*_func)(va_list _list);
};

/**
 * _lst_arr - Renamed data type
 * Return: 0
*/
typedef struct _lst _lst_arr;
int _printf(const char *format, ...);
int _putchar(char _p);
int s_func(va_list _list);
int c_func(va_list _list);
int d_func(va_list _list);
int (*_slt_func(char s))(va_list _list);
int print_num(long _n, int _c);
int u_func(va_list _list);
int custom_octal_format(unsigned int value);
int o_func(va_list _list);
int b_func(va_list _list);

int x_func(va_list _list);
int hexadecimal_lowercase(unsigned int value, int uppercase);
int hexadecimal_uppercase(unsigned int value, int uppercase);
int X_func(va_list _list);
#endif

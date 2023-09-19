#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#define buffsize 1024
/**
 * struct FormatSpecifier - new data type
 * @func: member of new data type
 * @format: member of new data type
 * Return: 0
 */
struct FormatSpecifier
{
	char format;
	int (*func)(va_list arg);
};

/**
 * FormatSpecifier - Renamed data type
 * Return: 0
 */
typedef struct FormatSpecifier FormatSpecifier;

int _printf(const char *format, ...);
int putchar_wrapper(char c);
int s_func(va_list list);
int c_func(va_list _list);
int d_func(va_list list);
int x_func(va_list list);
int select_format_specifier(va_list list, char format);
int print_num(long n, int c);





#endif

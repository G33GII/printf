#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * main - entry point
 * description - headers
 * Return: 0
 */
typedef struct _lst_arr
{
	char _chars;
	int (*_func)(va_list _list);
}_lst_arr;

int _printf(const char *format, ...);
int _putchar(char _p);
int s_func(va_list _list);
int c_func(va_list _list);
int (*_slt_func(char s))(va_list _list);




#endif

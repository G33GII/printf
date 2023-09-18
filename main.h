#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

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
int (*_slt_func(char s))(va_list _list);




#endif

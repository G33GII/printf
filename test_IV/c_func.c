#include "main.h"

/**
 * c_func - Print a string to the standard output.
 * @_list: The string to print.
 * Return: The number of characters printed.
 */
int c_func(va_list _list)
{
	char _c = va_arg(_list, int);

	return (putchar_wrapper(_c));
}

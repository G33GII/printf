#include "main.h"

/**
 * d_func - Print a number to the standard output.
 * @_list: The integer to print.
 * Return: The number of characters printed.
 */
int d_func(va_list _list)
{
	/*int _c = 0;*/
	int _v = va_arg(_list, int);

	return (print_num(_v, 0));
}

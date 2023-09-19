#include "main.h"

/**
 * d_func - Print a number to the standard output.
 * @list: The integer to print.
 * Return: The number of characters printed.
 */
int d_func(va_list list)
{
	int value = va_arg(list, int);

	return (print_num(value, 0));
}

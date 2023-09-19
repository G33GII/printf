#include "main.h"

/**
 * s_func - Print a string to the standard output.
 * @list: The string to print.
 * Return: The number of characters printed.
 */
int s_func(va_list list)
{
	int length = 0;
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";

	for (; *s; s++, length++)
		putchar_wrapper(*s);

	return (length);
}


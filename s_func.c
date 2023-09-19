#include "main.h"

/**
 * s_func - Print a string to the standard output.
 * @_list: The string to print.
 * Return: The number of characters printed.
 */
int s_func(va_list _list)
{
	int _x = 0;
	char *_s = va_arg(_list, char *);

	if (!_s)
		_s = "(null)";
	if (*_s == '\0')
		return (0);
	for (; *_s; _s++, _x++)
		_putchar(*_s);
	return (_x);
}


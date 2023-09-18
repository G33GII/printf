#include "main.h"

/**
 * _print_str_ - Print a string to the standard output.
 * @_s: The string to print.
 * Return: The number of characters printed.
 */
int _print_str_(const char *_s)
{
	if (_s == '\0')
	return (1);
	
	for (; *_s; _s++)
		_putchar_(*_s);
	
	return (0);
}

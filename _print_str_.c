#include "main.h"

/**
 * _print_str_ - Print a string to the standard output.
 * @_s: The string to print.
 * Return: The number of characters printed.
 */
int _print_str_(const char *_s)
{
	for (; *_s; _s++)
		_putchar_(*_s);
	return (0);
}

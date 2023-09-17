#include "main.h"

/**
 * _print_str_ - Print a string to the standard output.
 * @_s: The string to print.
 * Return: The number of characters printed.
 */
int _print_str_(const char *_s)
{
	int _length_ = 0;

	while (*_s)
	{
		_length_
			+= _putchar_(*_s);
		_s++;
	}
	return (_length_);
}

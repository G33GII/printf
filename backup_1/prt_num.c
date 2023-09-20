#include "main.h"

/**
 * print_num - Print a number to the standard output.
 * @_n: The number to print.
 * @_c: Number count variable
 * Return: The number of characters printed.
 */
int print_num(long _n, int _c)
{
	if (_n < 0)
	{
		_putchar('-');
		_c++;
		_n *= -1;
	}

	if (_n / 10)
		_c = print_num(_n / 10, _c);

	_putchar(_n % 10 + '0');
	return (_c + 1);
}

#include "main.h"
/**
 * u_func - print an unsigned decimal integer
 * @_list: variable name
 * Return: 0
 */
int u_func(va_list _list)
{
	int _c = 0;

	unsigned int _v = va_arg(_list, unsigned int);

	_c = print_num(_v, 0);
	return (_c);
}
